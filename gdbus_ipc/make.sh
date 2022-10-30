#!/bin/bash
gdbus-codegen --generate-c-code=libgdbus_s libgdbus.xml
 
export C_INCLUDE_PATH="$C_INCLUDE_PATH:/usr/include/glib-2.0:/usr/include/gio-unix-2.0:/usr/include:/usr/lib/x86_64-linux-gnu/glib-2.0/include"
 
gcc -c libgdbus_s.c
 
ar crv libgdbus_s.a libgdbus_s.o
