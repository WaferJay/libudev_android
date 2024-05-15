/* fix-ups for building udev on Android */

#pragma once

/* Return an alloca'd copy of at most N bytes of string.  */
# define strndupa(s,n)							\
  (__extension__							\
    ({									\
      const char *__old = (s);						\
      size_t __len = strnlen (__old, (n));				\
      char *__new = (char *) __builtin_alloca (__len + 1);		\
      __new[__len] = '\0';						\
      (char *) memcpy (__new, __old, __len);				\
    }))

/* bionic has gettid */
#define HAVE_DECL_GETTID 1

/* bionic has pivot_root */
#define HAVE_DECL_PIVOT_ROOT 1

/* work-around for missing secure_getenv */
#define HAVE_SECURE_GETENV 1 /* claim we have it */
#define secure_getenv getenv /* but alias it to getenv() */

#define LINE_MAX 2048

/* workaround for canonicalize_file_name */
#define canonicalize_file_name(name) realpath(name, NULL);

#define program_invocation_name "udev"
#define program_invocation_short_name "udev"

/* work-around for missing get_current_dir_name() */
#define get_current_dir_name() getcwd(0,0)

size_t
parse_printf_format (const char *fmt, size_t n, int *argtypes);
