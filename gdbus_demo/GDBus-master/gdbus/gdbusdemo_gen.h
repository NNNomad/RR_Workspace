/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef ___HOME_ROBOTARM_WORKSPACE_GDBUS_DEMO_GDBUS_MASTER_GDBUS_GDBUSDEMO_GEN_H__
#define ___HOME_ROBOTARM_WORKSPACE_GDBUS_DEMO_GDBUS_MASTER_GDBUS_GDBUSDEMO_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.gdbus.demo */

#define TYPE_COM_GDBUS_DEMO (com_gdbus_demo_get_type ())
#define COM_GDBUS_DEMO(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS_DEMO, ComGdbusDemo))
#define IS_COM_GDBUS_DEMO(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS_DEMO))
#define COM_GDBUS_DEMO_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_COM_GDBUS_DEMO, ComGdbusDemoIface))

struct _ComGdbusDemo;
typedef struct _ComGdbusDemo ComGdbusDemo;
typedef struct _ComGdbusDemoIface ComGdbusDemoIface;

struct _ComGdbusDemoIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_set_name) (
    ComGdbusDemo *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  void (*send_signal) (
    ComGdbusDemo *object,
    gint arg_sig);

};

GType com_gdbus_demo_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *com_gdbus_demo_interface_info (void);
guint com_gdbus_demo_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void com_gdbus_demo_complete_set_name (
    ComGdbusDemo *object,
    GDBusMethodInvocation *invocation,
    const gchar *response);



/* D-Bus signal emissions functions: */
void com_gdbus_demo_emit_send_signal (
    ComGdbusDemo *object,
    gint arg_sig);



/* D-Bus method calls: */
void com_gdbus_demo_call_set_name (
    ComGdbusDemo *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean com_gdbus_demo_call_set_name_finish (
    ComGdbusDemo *proxy,
    gchar **out_response,
    GAsyncResult *res,
    GError **error);

gboolean com_gdbus_demo_call_set_name_sync (
    ComGdbusDemo *proxy,
    const gchar *arg_name,
    gchar **out_response,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_COM_GDBUS_DEMO_PROXY (com_gdbus_demo_proxy_get_type ())
#define COM_GDBUS_DEMO_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS_DEMO_PROXY, ComGdbusDemoProxy))
#define COM_GDBUS_DEMO_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_COM_GDBUS_DEMO_PROXY, ComGdbusDemoProxyClass))
#define COM_GDBUS_DEMO_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_COM_GDBUS_DEMO_PROXY, ComGdbusDemoProxyClass))
#define IS_COM_GDBUS_DEMO_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS_DEMO_PROXY))
#define IS_COM_GDBUS_DEMO_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_COM_GDBUS_DEMO_PROXY))

typedef struct _ComGdbusDemoProxy ComGdbusDemoProxy;
typedef struct _ComGdbusDemoProxyClass ComGdbusDemoProxyClass;
typedef struct _ComGdbusDemoProxyPrivate ComGdbusDemoProxyPrivate;

struct _ComGdbusDemoProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ComGdbusDemoProxyPrivate *priv;
};

struct _ComGdbusDemoProxyClass
{
  GDBusProxyClass parent_class;
};

GType com_gdbus_demo_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ComGdbusDemoProxy, g_object_unref)
#endif

void com_gdbus_demo_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ComGdbusDemo *com_gdbus_demo_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ComGdbusDemo *com_gdbus_demo_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void com_gdbus_demo_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ComGdbusDemo *com_gdbus_demo_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ComGdbusDemo *com_gdbus_demo_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_COM_GDBUS_DEMO_SKELETON (com_gdbus_demo_skeleton_get_type ())
#define COM_GDBUS_DEMO_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_COM_GDBUS_DEMO_SKELETON, ComGdbusDemoSkeleton))
#define COM_GDBUS_DEMO_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_COM_GDBUS_DEMO_SKELETON, ComGdbusDemoSkeletonClass))
#define COM_GDBUS_DEMO_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_COM_GDBUS_DEMO_SKELETON, ComGdbusDemoSkeletonClass))
#define IS_COM_GDBUS_DEMO_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_COM_GDBUS_DEMO_SKELETON))
#define IS_COM_GDBUS_DEMO_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_COM_GDBUS_DEMO_SKELETON))

typedef struct _ComGdbusDemoSkeleton ComGdbusDemoSkeleton;
typedef struct _ComGdbusDemoSkeletonClass ComGdbusDemoSkeletonClass;
typedef struct _ComGdbusDemoSkeletonPrivate ComGdbusDemoSkeletonPrivate;

struct _ComGdbusDemoSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ComGdbusDemoSkeletonPrivate *priv;
};

struct _ComGdbusDemoSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType com_gdbus_demo_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ComGdbusDemoSkeleton, g_object_unref)
#endif

ComGdbusDemo *com_gdbus_demo_skeleton_new (void);


G_END_DECLS

#endif /* ___HOME_ROBOTARM_WORKSPACE_GDBUS_DEMO_GDBUS_MASTER_GDBUS_GDBUSDEMO_GEN_H__ */
