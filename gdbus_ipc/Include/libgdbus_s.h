/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __LIBGDBUS_S_H__
#define __LIBGDBUS_S_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.gdbus */

#define TYPE_COM_GDBUS (com_gdbus_get_type ())
#define COM_GDBUS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS, ComGdbus))
#define IS_COM_GDBUS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS))
#define COM_GDBUS_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_COM_GDBUS, ComGdbusIface))

struct _ComGdbus;
typedef struct _ComGdbus ComGdbus;
typedef struct _ComGdbusIface ComGdbusIface;

struct _ComGdbusIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_get_test_bool) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_test_double) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_test_info) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_test_int) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_test_string) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_test_bool) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_Set_bool);

  gboolean (*handle_set_test_double) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gdouble arg_Set_double);

  gboolean (*handle_set_test_info) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_Set_info);

  gboolean (*handle_set_test_int) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gint arg_Set_int);

  gboolean (*handle_set_test_string) (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_Set_string);

  void (*send_test_bool) (
    ComGdbus *object,
    gboolean arg_Send_bool);

  void (*send_test_double) (
    ComGdbus *object,
    gdouble arg_Send_double);

  void (*send_test_info) (
    ComGdbus *object,
    GVariant *arg_Send_info);

  void (*send_test_int) (
    ComGdbus *object,
    gint arg_Send_int);

  void (*send_test_string) (
    ComGdbus *object,
    const gchar *arg_Send_string);

};

GType com_gdbus_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *com_gdbus_interface_info (void);
guint com_gdbus_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void com_gdbus_complete_set_test_bool (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

void com_gdbus_complete_set_test_int (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

void com_gdbus_complete_set_test_double (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

void com_gdbus_complete_set_test_string (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

void com_gdbus_complete_set_test_info (
    ComGdbus *object,
    GDBusMethodInvocation *invocation);

void com_gdbus_complete_get_test_bool (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gboolean Get_bool);

void com_gdbus_complete_get_test_int (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gint Get_int);

void com_gdbus_complete_get_test_double (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    gdouble Get_double);

void com_gdbus_complete_get_test_string (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    const gchar *Get_string);

void com_gdbus_complete_get_test_info (
    ComGdbus *object,
    GDBusMethodInvocation *invocation,
    GVariant *Get_info);



/* D-Bus signal emissions functions: */
void com_gdbus_emit_send_test_bool (
    ComGdbus *object,
    gboolean arg_Send_bool);

void com_gdbus_emit_send_test_int (
    ComGdbus *object,
    gint arg_Send_int);

void com_gdbus_emit_send_test_double (
    ComGdbus *object,
    gdouble arg_Send_double);

void com_gdbus_emit_send_test_string (
    ComGdbus *object,
    const gchar *arg_Send_string);

void com_gdbus_emit_send_test_info (
    ComGdbus *object,
    GVariant *arg_Send_info);



/* D-Bus method calls: */
void com_gdbus_call_set_test_bool (
    ComGdbus *proxy,
    gboolean arg_Set_bool,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_set_test_bool_finish (
    ComGdbus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_set_test_bool_sync (
    ComGdbus *proxy,
    gboolean arg_Set_bool,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_set_test_int (
    ComGdbus *proxy,
    gint arg_Set_int,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_set_test_int_finish (
    ComGdbus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_set_test_int_sync (
    ComGdbus *proxy,
    gint arg_Set_int,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_set_test_double (
    ComGdbus *proxy,
    gdouble arg_Set_double,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_set_test_double_finish (
    ComGdbus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_set_test_double_sync (
    ComGdbus *proxy,
    gdouble arg_Set_double,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_set_test_string (
    ComGdbus *proxy,
    const gchar *arg_Set_string,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_set_test_string_finish (
    ComGdbus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_set_test_string_sync (
    ComGdbus *proxy,
    const gchar *arg_Set_string,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_set_test_info (
    ComGdbus *proxy,
    GVariant *arg_Set_info,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_set_test_info_finish (
    ComGdbus *proxy,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_set_test_info_sync (
    ComGdbus *proxy,
    GVariant *arg_Set_info,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_get_test_bool (
    ComGdbus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_get_test_bool_finish (
    ComGdbus *proxy,
    gboolean *out_Get_bool,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_get_test_bool_sync (
    ComGdbus *proxy,
    gboolean *out_Get_bool,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_get_test_int (
    ComGdbus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_get_test_int_finish (
    ComGdbus *proxy,
    gint *out_Get_int,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_get_test_int_sync (
    ComGdbus *proxy,
    gint *out_Get_int,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_get_test_double (
    ComGdbus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_get_test_double_finish (
    ComGdbus *proxy,
    gdouble *out_Get_double,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_get_test_double_sync (
    ComGdbus *proxy,
    gdouble *out_Get_double,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_get_test_string (
    ComGdbus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_get_test_string_finish (
    ComGdbus *proxy,
    gchar **out_Get_string,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_get_test_string_sync (
    ComGdbus *proxy,
    gchar **out_Get_string,
    GCancellable *cancellable,
    GError **error);

void com_gdbus_call_get_test_info (
    ComGdbus *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_call_get_test_info_finish (
    ComGdbus *proxy,
    GVariant **out_Get_info,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_call_get_test_info_sync (
    ComGdbus *proxy,
    GVariant **out_Get_info,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_COM_GDBUS_PROXY (com_gdbus_proxy_get_type ())
#define COM_GDBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS_PROXY, ComGdbusProxy))
#define COM_GDBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_COM_GDBUS_PROXY, ComGdbusProxyClass))
#define COM_GDBUS_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_COM_GDBUS_PROXY, ComGdbusProxyClass))
#define IS_COM_GDBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS_PROXY))
#define IS_COM_GDBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_COM_GDBUS_PROXY))

typedef struct _ComGdbusProxy ComGdbusProxy;
typedef struct _ComGdbusProxyClass ComGdbusProxyClass;
typedef struct _ComGdbusProxyPrivate ComGdbusProxyPrivate;

struct _ComGdbusProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ComGdbusProxyPrivate *priv;
};

struct _ComGdbusProxyClass
{
  GDBusProxyClass parent_class;
};

GType com_gdbus_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ComGdbusProxy, g_object_unref)
#endif

void com_gdbus_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ComGdbus *com_gdbus_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ComGdbus *com_gdbus_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void com_gdbus_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ComGdbus *com_gdbus_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ComGdbus *com_gdbus_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_COM_GDBUS_SKELETON (com_gdbus_skeleton_get_type ())
#define COM_GDBUS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS_SKELETON, ComGdbusSkeleton))
#define COM_GDBUS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_COM_GDBUS_SKELETON, ComGdbusSkeletonClass))
#define COM_GDBUS_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_COM_GDBUS_SKELETON, ComGdbusSkeletonClass))
#define IS_COM_GDBUS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS_SKELETON))
#define IS_COM_GDBUS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_COM_GDBUS_SKELETON))

typedef struct _ComGdbusSkeleton ComGdbusSkeleton;
typedef struct _ComGdbusSkeletonClass ComGdbusSkeletonClass;
typedef struct _ComGdbusSkeletonPrivate ComGdbusSkeletonPrivate;

struct _ComGdbusSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ComGdbusSkeletonPrivate *priv;
};

struct _ComGdbusSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType com_gdbus_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ComGdbusSkeleton, g_object_unref)
#endif

ComGdbus *com_gdbus_skeleton_new (void);


G_END_DECLS

#endif /* __LIBGDBUS_S_H__ */
