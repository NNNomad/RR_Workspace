#include "gdbus.h"
#include "client.h"

static GMainLoop *pLoop = NULL;
static GDBusConnection *pConnection = NULL;
static ComGdbus *pProxy = NULL;

static void SetTestBool_Method(gboolean in_arg, gboolean *out_arg,  GError **pError);
static void SetTestInt_Method(gint in_arg, gint *out_arg,  GError **pError);
static void SetTestDouble_Method(gdouble in_arg, gdouble *out_arg,  GError **pError);
static void SetTestString_Method(const gchar *in_arg, gchar **out_arg,  GError **pError);
static void SetTestInfo_Method(GVariant *in_arg, GVariant **out_arg,  GError **pError);

static gboolean SendSignalHandler(ComGdbus *object, const gchar *arg, gpointer userdata);
static void *run(void *arg);
//bool initDBusCommunication(void);

//发送消息为bool
static void SetTestBool_Method(gboolean in_arg, gboolean *out_arg,  GError **pError) {

	com_gdbus_call_set_test_bool_sync(pProxy, in_arg, out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestBool is called. TestBool = %d .\n", in_arg);
		g_print("Server Response is called. Response = %d .\n", *out_arg);
		g_free(out_arg);
    } else {
        g_print("Failed to call SetTestBool. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为int
static void SetTestInt_Method(gint in_arg, gint *out_arg,  GError **pError) {

	com_gdbus_call_set_test_int_sync(pProxy, in_arg, out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestInt is called. TestInt = %d .\n", in_arg);
		g_print("Server Response is called. Response = %d .\n", *out_arg);
		g_free(out_arg);
    } else {
        g_print("Failed to call SetTestInt. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为double
static void SetTestDouble_Method(gdouble in_arg, gdouble *out_arg,  GError **pError) {

	com_gdbus_call_set_test_double_sync(pProxy, in_arg, out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestDouble is called. Test = %lf .\n", in_arg);
		g_print("Server Response is called. Response = %lf .\n", *out_arg);
		g_free(out_arg);
    } else {
        g_print("Failed to call SetTestDouble. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为string
static void SetTestString_Method(const gchar *in_arg, gchar **out_arg, GError **pError){
	
	com_gdbus_call_set_test_string_sync(pProxy, in_arg, out_arg, NULL, pError);
	
	if (*pError == NULL) {
        g_print("Client SetTestString is called. TestString = %s .\n", in_arg);
		g_print("Server Response is called. Response = %s .\n", *out_arg);
		g_free(*out_arg);
    } else {
        g_print("Failed to call SetTestString. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为testinfo
// static void SetTestInfo_Method(const GVariant *in_arg, GVariant **out_arg, GError **pError){
	
// 	com_gdbus_call_set_test_string_sync (pProxy, in_arg, out_arg, NULL, pError);
	
// 	if (*pError == NULL) {
//         g_print("Client SetTestString is called. TestString = %s .\n", in_arg);
// 		g_print("Server Response is called. Response = %s .\n", *out_arg);
// 		g_free(*out_arg);
//     } else {
//         g_print("Failed to call SetTestString. Reason: %s.\n", (*pError)->message);
//         g_error_free(*pError);
//     }
// }

//接收Server发来的signal
static gboolean SendSignalHandler(ComGdbus *object, const gchar *arg, gpointer userdata){
	 
	g_print("SendSignalHandler: Signal Text: %s.\n", arg);

    return TRUE;
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

