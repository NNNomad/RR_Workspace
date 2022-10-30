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

typedef struct _testinfo {
    gboolean bool_param;
    gint int_param;
    gdouble double_param;
    gchar string_param[STRING_BUFFER_SIZE];
}Testinfo;

#endif