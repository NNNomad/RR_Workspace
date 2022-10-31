#ifndef _SERVER_H_
#define _SERVER_H_
#define STRING_BUFFER_SIZE 100

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <gio/gio.h>
#include <glib.h>

#include "libgdbus_s.h"

bool initDBusCommunicationForServer(void);

#endif