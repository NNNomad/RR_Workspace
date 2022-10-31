#include "client.h"

static int key = 0;
static GMainLoop *pLoop = NULL;
static GDBusConnection *pConnection = NULL;
static ComGdbus *pProxy = NULL;

//bool initDBusCommunication(void);

//发送消息为bool
static void SetTestBool_Method(gboolean in_arg, gboolean out_arg,  GError **pError) {

	com_gdbus_call_set_test_bool_sync(pProxy, in_arg, &out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestBool is called. TestBool = %d .\n", (bool)in_arg);
		g_print("Server Response is called. Response = %d .\n", out_arg);
		//g_free(out_arg);
    } else {
        g_print("Failed to call SetTestBool. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为int
static void SetTestInt_Method(gint in_arg, gint out_arg,  GError **pError) {

	com_gdbus_call_set_test_int_sync(pProxy, in_arg, &out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestInt is called. TestInt = %d .\n", in_arg);
		g_print("Server Response is called. Response = %d .\n", out_arg);
		//g_free(out_arg);
    } else {
        g_print("Failed to call SetTestInt. Reason: %s.\n", (*pError)->message);
        g_error_free(*pError);
    }
}

//发送消息为double
static void SetTestDouble_Method(gdouble in_arg, gdouble out_arg,  GError **pError) {

	com_gdbus_call_set_test_double_sync(pProxy, in_arg, &out_arg, NULL, pError);

	if (*pError == NULL) {
        g_print("Client SetTestDouble is called. TestDouble = %lf .\n", in_arg);
		g_print("Server Response is called. Response = %lf .\n", out_arg);
		//g_free(out_arg);
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
static gboolean SendBoolHandler(ComGdbus *object, const gboolean arg, gpointer userdata) {

	g_print("Server Send Test: %d.\n", arg);

    return TRUE;
}

static gboolean SendIntHandler(ComGdbus *object, const gint arg, gpointer userdata) {

	g_print("Server Send Test: %d.\n", arg);

    return TRUE;
}

static gboolean SendDoubleHandler(ComGdbus *object, const gdouble arg, gpointer userdata) {

	g_print("Server Send Test: %lf.\n", arg);

    return TRUE;
}

static gboolean SendStringHandler(ComGdbus *object, const gchar *arg, gpointer userdata){
	 
	g_print("Server Send Test: %s.\n", arg);

    return TRUE;
}


