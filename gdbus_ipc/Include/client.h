#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <gio/gio.h>
#include <glib.h>

#include "libgdbus_s.h"

bool initDBusCommunication(void);

#endif