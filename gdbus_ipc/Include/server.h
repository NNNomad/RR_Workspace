#ifndef _SERVER_H_
#define _SERVER_H_

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <gio/gio.h>
#include <glib.h>

#include "libgdbus_s.h"

bool initDBusCommunicationForServer(void);

#endif