#include "client_settest.h"
#include "client.c"

static gboolean Test_b;
static gint Test_i;
static gdouble Test_d;
static gchar Test_s[STRING_BUFFER_SIZE] = {0};
static Testinfo *Test_info = NULL;

extern GMainLoop *pLoop;
extern GDBusConnection *pConnection;
extern ComGdbus *pProxy;

bool SetTestBool()
{
    //gint bool_temp;d
    gboolean out_arg = 0;
    GError *gMethoderror = NULL;

    printf("请输入一个bool数据：");
    scanf("%d", &Test_b);
    printf("\n");

    g_signal_connect(pProxy, "send-test-bool", G_CALLBACK(SendBoolHandler), NULL);
    SetTestBool_Method(Test_b, out_arg, &gMethoderror);

    return TRUE;
}

bool SetTestInt()
{
    gint out_arg = 0;
    GError *gMethoderror = NULL;
    printf("请输入一个int数据：");
    scanf("%d", &Test_i);
    printf("\n");

    g_signal_connect(pProxy, "send-test-int", G_CALLBACK(SendIntHandler), NULL);
    SetTestInt_Method(Test_i, out_arg, &gMethoderror);

    return TRUE;       
}

bool SetTestDouble()
{
    gdouble out_arg = 0.0;
    GError *gMethoderror = NULL;
    printf("请输入一个double数据：");
    scanf("%lf", &Test_d);
    printf("\n");

    g_signal_connect(pProxy, "send-test-double", G_CALLBACK(SendDoubleHandler), NULL);
    SetTestDouble_Method(Test_d, out_arg, &gMethoderror);

    return TRUE;     
}

bool SetTestString()
{
    gchar *out_arg = NULL;
    GError *gMethoderror = NULL;
    printf("请输入一个string数据：");
    scanf("%s", Test_s);
    printf("\n");

    g_signal_connect(pProxy, "send-test-string", G_CALLBACK(SendStringHandler), NULL);
    SetTestString_Method(Test_s, &out_arg, &gMethoderror);

    return TRUE;     
}

bool SetTestInfo()
{
    gboolean bool_temp;
    gint int_temp;
    gdouble double_temp;
    gchar string_temp[STRING_BUFFER_SIZE];
    printf("请定义一个TestInfo：\n");

    printf("请输入一个bool数据："); scanf("%d", &bool_temp); printf("\n");
    printf("请输入一个int数据："); scanf("%d", &int_temp); printf("\n");
    printf("请输入一个double数据："); scanf("%lf", &double_temp); printf("\n");
    printf("请输入一个string数据："); scanf("%s", string_temp); printf("\n");

    Test_info->bool_param = (bool)bool_temp;
    Test_info->int_param = int_temp;
    Test_info->double_param = double_temp;
    memcpy(Test_info->string_param, string_temp, STRING_BUFFER_SIZE);

    return TRUE;
}