#include "settest.c"
#include "gettest.c"


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

	return bRet;
}


void ClientSetTest()
{
    printf("客户端发送数据类型选项：1. bool  2. int  3. double  4. string  5. TestInfo\n");
    printf("输入Key值选择数据类型： ");
    scanf("%d", &key);
    printf("\n");
    while (key < 1 || key > 5)
    {
        printf("Key值有误，请重新输入Key值： ");
        scanf("%d", &key);
        printf("\n");
    }

    switch (key)
    {
    case 1:
        SetTestBool();
        break;
    case 2:
        SetTestInt();
        break;        
    case 3:
        SetTestDouble();
        break;
    case 4:
        SetTestString();
        break;        
    case 5:
        SetTestInfo();
        break;
    default:
        break;
    }

}

void ClientGetTest()
{
    printf("客户端获取数据类型选项：1. bool  2. int  3. double  4. string  5. TestInfo\n");    
    printf("输入Key值选择数据类型： ");
    scanf("%d", &key);
    printf("\n");
    while (key < 1 || key > 5)
    {
        printf("Key值有误，请重新输入Key值： ");
        scanf("%d", &key);
        printf("\n");
    }

    switch (key)
    {
    case 1:
        GetTestBool();
        break;
    case 2:
        GetTestInt();
        break;        
    case 3:
        GetTestDouble();
        break;
    case 4:
        GetTestString();
        break;        
    case 5:
        GetTestInfo();
        break;
    default:
        break;
    }
}

//主事件循环
void *run(void* arg)
{
    //g_main_loop_run(pLoop);
    char select;
	while (1) 
    {
        printf("客户端 输入s发送数据 or 输入g获取数据 ");
        scanf("%s", &select);
        if (select == 's' || select == 'S') {
            ClientSetTest();
        }
        else if (select == 'g' || select == 'G') {
            ClientGetTest();
        }
        else continue;
        printf("\n");
    }
}

int main(void)
{

	pthread_t tid;

    bool startDBUS = initDBusCommunication();

    if (startDBUS == FALSE) {
        g_print("initDBusCommunication: Failed to connect signal.  \n");
        return -1;
    }
    
	pthread_create(&tid,NULL,run,NULL);

    while (1)
	{
		/* code */
	}
	
    return 0;
}