#include "client_gettest.h"

extern gboolean Test_b;
extern gint Test_i;
extern gdouble Test_d;
extern gchar Test_s[STRING_BUFFER_SIZE];
extern Testinfo *Test_info;

void GetTestBool()
{
    // gboolean Get_bool = 0;
    // GError *pError = NULL;

    // g_signal_connect(pProxy, "get-test-bool", G_CALLBACK(SendBoolHandler), NULL);
    // com_gdbus_call_get_test_bool_sync(pProxy, &Get_bool, NULL, &pError);
    // if (pError == NULL) {
    //     g_print("Latest TestBool = %d\n", Get_bool);
    // } else {
    //     g_print("Failed to call GetTestBool. Reason: %s.\n", (pError)->message);
    //     g_error_free(pError);
    // }
    Test_b = (bool)Test_b;
    g_print("Latest TestBool = %d\n", Test_b);

}

void GetTestInt()
{
    // gint Get_int = 0;
    // GError *pError = NULL;

    // g_signal_connect(pProxy, "get-test-int", G_CALLBACK(SendIntHandler), NULL);
    // com_gdbus_call_get_test_int_sync(pProxy, &Get_int, NULL, &pError);
    // if (pError == NULL) {
    //     g_print("Latest TestInt =  %d\n", Get_int);
    // } else {
    //     g_print("Failed to call GetTestInt. Reason: %s.\n", (pError)->message);
    //     g_error_free(pError);
    // }

    g_print("Latest TestInt = %d\n", Test_i);
}

void GetTestDouble()
{
    // gdouble Get_double = 0.0;
    // GError *pError = NULL;

    // g_signal_connect(pProxy, "get-test-double", G_CALLBACK(SendDoubleHandler), NULL);
    // com_gdbus_call_get_test_double_sync(pProxy, &Get_double, NULL, &pError);
    // if (pError == NULL) {
    //     g_print("Latest TestDouble =  %lf\n", Get_double);
    // } else {
    //     g_print("Failed to call GetTestDouble. Reason: %s.\n", (pError)->message);
    //     g_error_free(pError);
    // }

    g_print("Latest TestDouble = %lf\n", Test_d);
}

void GetTestString()
{
    // gchar Get_string[STRING_BUFFER_SIZE] = {0};
    // GError *pError = NULL;

    // g_signal_connect(pProxy, "get-test-string", G_CALLBACK(SendStringHandler), NULL);
    // com_gdbus_call_get_test_string_sync(pProxy, (gchar **)Get_string, NULL, &pError);
    // if (pError == NULL) {
    //     g_print("Latest TestString =  %s\n", Get_string);
    // } else {
    //     g_print("Failed to call GetTestString. Reason: %s.\n", (pError)->message);
    //     g_error_free(pError);
    // }
    g_print("Latest TestString = %s\n", Test_s);

}

void GetTestInfo()
{

}
