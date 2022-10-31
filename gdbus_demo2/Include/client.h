#ifndef _CLIENT_H_
#define _CLIENT_H_
#define STRING_BUFFER_SIZE 100

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <gio/gio.h>
#include <glib.h>

#include "libgdbus_s.h"
#include "gdbus.h"

typedef struct _testinfo 
{
    gboolean bool_param;
    gint int_param;
    gdouble double_param;
    gchar string_param[STRING_BUFFER_SIZE];
}Testinfo;

static void *run(void *arg);

static gboolean SendBoolHandler(ComGdbus *object, const gboolean arg, gpointer userdata);
static gboolean SendIntHandler(ComGdbus *object, const gint arg, gpointer userdata);
static gboolean SendDoubleHandler(ComGdbus *object, const gdouble arg, gpointer userdata);
static gboolean SendStringHandler(ComGdbus *object, const gchar *arg, gpointer userdata);

#endif