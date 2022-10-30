#include "gdbus.h"
#include "client.h"

static GMainLoop *pLoop = NULL;
static GDBusConnection *pConnection = NULL;
static ComGdbus *pProxy = NULL;

static void SetTestString_Method(const gchar *in_arg, GError** pError);
static gboolean SendSignalHandler(ComGdbus *object, const gchar *arg, gpointer userdata);
static void *run(void *arg);

//发送消息为string
static void SetTestString_Method(const gchar *in_arg, GError** pError){
	
	com_gdbus_call_set_test_string_sync (pProxy, in_arg, NULL, pError);
	
	if (*pError == NULL) {
        g_print("Client SetTestString is called, TestString = %s .\n", in_arg);
    } else {
        g_print("Failed to call SetTestString. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//接收Server发来的signal
static gboolean SendSignalHandler(ComGdbus *object, const gchar *arg, gpointer userdata){
	 
	g_print("SendSignalHandler: Signal Text: %s.\n", arg);

    return TRUE;
}

//主事件循环
static void *run(void* arg)
{
    g_main_loop_run(pLoop);
}

//初始化DBus并进行连接
bool initDBusCommunication(void){
	
	bool bRet = TRUE;
    GError *pConnError = NULL;
    GError *pProxyError = NULL;
	
	do{
		bRet = TRUE;
		pLoop = g_main_loop_new(NULL,FALSE); 
		
		pConnection = g_bus_get_sync(COM_GDBUS_DEMO_BUS, NULL, &pConnError);
		if(pConnError == NULL){
			pProxy = com_gdbus_proxy_new_sync(pConnection,
						 G_DBUS_PROXY_FLAGS_NONE,
						 COM_GDBUS_DEMO_NAME,
						 COM_GDBUS_DEMO_OBJECT_PATH,
						 NULL,
						 &pProxyError);
			if(pProxy == 0){
				g_print("initDBusCommunication: Create proxy failed. Reason: %s.\n", pConnError->message);
				g_error_free(pProxyError);
				bRet = FALSE;
			}else{
				g_print("initDBusCommunication: Create proxy successfully. \n");
			}
		}else{
			g_print("initDBusCommunication: Failed to connect to dbus. Reason: %s.\n", pConnError->message);
            g_error_free(pConnError);
            bRet = FALSE;
		}
	}while(bRet == FALSE);
					 
	if(bRet == TRUE){
		g_signal_connect(pProxy, "send-test-string", G_CALLBACK(SendSignalHandler), NULL);
	}else{
		g_print("initDBusCommunication: Failed to connect signal.  \n");
	}

	return bRet;
}

int main(void){

	pthread_t tid;
	
	const gchar *intputArg = "NOMAD";
    gchar *outputArg = NULL;
    GError *gMethoderror = NULL;

    initDBusCommunication();

    SetTestString_Method(intputArg, &gMethoderror);
    
	pthread_create(&tid,NULL,run,NULL);

    while (1)
	{
		/* code */
	}
	
    return 0;
}