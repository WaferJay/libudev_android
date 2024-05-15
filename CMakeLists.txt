project(external)

add_library(libudev SHARED
        systemd/src/shared/env-util.c
        systemd/src/shared/exit-status.c
        systemd/src/shared/hashmap.c
        systemd/src/shared/fileio.c
        systemd/src/shared/label.c
        systemd/src/shared/log.c
        systemd/src/shared/mkdir.c
        systemd/src/shared/path-util.c
        systemd/src/shared/set.c
        systemd/src/shared/socket-util.c
        systemd/src/shared/strv.c
        systemd/src/shared/strxcpyx.c
        systemd/src/shared/time-util.c
        systemd/src/shared/utf8.c
        systemd/src/shared/util.c
        systemd/src/libudev/libudev-device.c
        systemd/src/libudev/libudev-device-private.c
        systemd/src/libudev/libudev-enumerate.c
        systemd/src/libudev/libudev-hwdb.c
        systemd/src/libudev/libudev-list.c
        systemd/src/libudev/libudev-monitor.c
        systemd/src/libudev/libudev-queue.c
        systemd/src/libudev/libudev-queue-private.c
        systemd/src/libudev/libudev-util.c
        systemd/src/libudev/libudev.c)
add_definitions(-DHAVE_DECL_GETTID=1 -DHAVE_SECURE_GETENV=1 -Dsecure_getenv=getenv)
target_include_directories(libudev PUBLIC systemd/src/libudev/ systemd/src/shared)
include_directories(systemd/src/libudev/ systemd/src/shared systemd/src/systemd systemd/src include/)

