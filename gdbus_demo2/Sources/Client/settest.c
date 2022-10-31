#include "client.h"
#include "client.c"

static gboolean Test_b;
static gint Test_i;
static gdouble Test_d;
static gchar Test_s[STRING_BUFFER_SIZE] = {0};
static Testinfo *Test_info = NULL;

bool SetTestBool()
{
    //gint bool_temp;d
    gboolean *out_arg = NULL;
    GError *gMethoderror = NULL;

    scanf("请输入一个bool数据：%d\n", &Test_b);
    //*Test_b = (bool)bool_temp;

    SetTestBool_Method(Test_b, out_arg, &gMethoderror);

    return TRUE;
}

bool SetTestInt()
{
    gint *out_arg = NULL;
    GError *gMethoderror = NULL;
    scanf("请输入一个int数据：%d\n", &Test_i);

    SetTestInt_Method(Test_i, out_arg, &gMethoderror);

    return TRUE;       
}

bool SetTestDouble()
{
    gdouble *out_arg = NULL;
    GError *gMethoderror = NULL;
    scanf("请输入一个double数据：%lf\n", &Test_d);

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
    scanf("请输入一个bool数据：%d\n", &bool_temp);
    scanf("请输入一个int数据：%d\n", &int_temp);
    scanf("请输入一个double数据：%lf\n", &double_temp);
    scanf("请输入一个string数据：%s\n", string_temp);

    Test_info->bool_param = (bool)bool_temp;
    Test_info->int_param = int_temp;
    Test_info->double_param = double_temp;
    memcpy(Test_info->string_param, string_temp, STRING_BUFFER_SIZE);

    return TRUE;
}