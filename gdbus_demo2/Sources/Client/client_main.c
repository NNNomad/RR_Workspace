#include "settest.c"

static int key = 0;
static gint Test_i;
bool SetTestInt()
{
    gint *out_arg = NULL;
    GError *gMethoderror = NULL;
    scanf("请输入一个int数据：%d\n", &Test_i);

    SetTestInt_Method(Test_i, out_arg, &gMethoderror);

    return TRUE;       
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

//主事件循环
void *run(void* arg)
{
    //g_main_loop_run(pLoop);
	
    ClientSetTest();
}

int main(void)
{

	pthread_t tid;

    initDBusCommunication();
    
	pthread_create(&tid,NULL,run,NULL);

    while (1)
	{
		/* code */
	}
	
    return 0;
}