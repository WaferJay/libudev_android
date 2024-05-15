project(external)

add_library(libudev SHARED
        src/shared/env-util.c
        src/shared/exit-status.c
        src/shared/hashmap.c
        src/shared/fileio.c
        src/shared/label.c
        src/shared/log.c
        src/shared/mkdir.c
        src/shared/path-util.c
        src/shared/set.c
        src/shared/socket-util.c
        src/shared/strv.c
        src/shared/strxcpyx.c
        src/shared/time-util.c
        src/shared/utf8.c
        src/shared/util.c
        src/libudev/libudev-device.c
        src/libudev/libudev-device-private.c
        src/libudev/libudev-enumerate.c
        src/libudev/libudev-hwdb.c
        src/libudev/libudev-list.c
        src/libudev/libudev-monitor.c
        src/libudev/libudev-queue.c
        src/libudev/libudev-queue-private.c
        src/libudev/libudev-util.c
        src/libudev/libudev.c)
add_definitions(-DHAVE_DECL_GETTID=1 -DHAVE_SECURE_GETENV=1 -Dsecure_getenv=getenv)
target_include_directories(libudev PUBLIC src/libudev/ src/shared)
include_directories(src/libudev/ src/shared src/systemd src include/)

