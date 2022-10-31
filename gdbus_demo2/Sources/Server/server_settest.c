#include "server.h"
#include "gdbus.h"

static GMainLoop *pLoop = NULL;
static ComGdbus *pSkeleton = NULL;
static gchar SavedTest_s[100] = {0};

static gboolean SendTestString(gconstpointer p);

static gboolean SetTestBool(ComGdbus *object, GDBusMethodInvocation *invocation, const gboolean in_arg, gpointer user_data);
static gboolean SetTestInt(ComGdbus *object, GDBusMethodInvocation *invocation, const gint in_arg, gpointer user_data);
static gboolean SetTestDouble(ComGdbus *object, GDBusMethodInvocation *invocation, const gdouble in_arg, gpointer user_data);
static gboolean SetTestString(ComGdbus *object, GDBusMethodInvocation *invocation, const gchar *in_arg, gpointer user_data);

static void *run(void* arg);

static void GBusAcquired_Callback(GDBusConnection *connection,
                         const gchar *name,
                         gpointer user_data);
static void GBusNameAcquired_Callback (GDBusConnection *connection,
                             const gchar *name,
                             gpointer user_data);
static void GBusNameLost_Callback (GDBusConnection *connection,
                         const gchar *name,
                         gpointer user_data);

static gboolean SendTestString(gconstpointer p)          
{                                                         
    g_print("Server SendTestString is called.\n");            

    com_gdbus_emit_send_test_string (pSkeleton, SavedTest_s);

    return TRUE;                                          
} 

static gboolean SetTestBool(ComGdbus *object,
                           GDBusMethodInvocation *invocation,
                           const gboolean            in_arg,
                           gpointer               user_data)
{
    g_print("Server SetTestBool is called. TestBool is : %d.\n", in_arg);

    com_gdbus_complete_set_test_bool(object, invocation, in_arg);

    return TRUE;
}

static gboolean SetTestInt(ComGdbus *object,
                           GDBusMethodInvocation *invocation,
                           const gint            in_arg,
                           gpointer               user_data)
{
    g_print("Server SetTestInt is called. TestInt is : %d.\n", in_arg);

    com_gdbus_complete_set_test_int(object, invocation, in_arg);

    return TRUE;
}

static gboolean SetTestDouble(ComGdbus *object,
                           GDBusMethodInvocation *invocation,
                           const gdouble            in_arg,
                           gpointer               user_data)
{
    g_print("Server SetTestDouble is called. TestDouble is : %lf.\n", in_arg);

    com_gdbus_complete_set_test_double(object, invocation, in_arg);

    return TRUE;
}

static gboolean SetTestString(ComGdbus *object,
                           GDBusMethodInvocation *invocation,
                           const gchar           *in_arg,
                           gpointer               user_data)
{
    g_print("Server SetTestString is called. TestString is : %s.\n", in_arg);

    if (strlen(in_arg)+1 < STRING_BUFFER_SIZE) 
    {
        memset(SavedTest_s, 0, sizeof(SavedTest_s));

        strcpy(SavedTest_s, in_arg);

        //memcpy(SavedTest_s, in_arg, strlen(in_arg)+1);

        g_print("Server Save Text is : %s.\n", SavedTest_s);
    }

    com_gdbus_complete_set_test_string(object, invocation, in_arg);

    return TRUE;
}
