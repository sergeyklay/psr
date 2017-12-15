dnl $Id$

PHP_ARG_ENABLE(psr, whether to enable PSR support,
[  --enable-psr           Enable PSR support])

if test "$PHP_PSR" != "no"; then
  AC_MSG_CHECKING(PHP version)
  AC_TRY_COMPILE([#include <php_version.h>], [
#if !defined(PHP_VERSION_ID) || PHP_VERSION_ID < 70000
#error  this extension requires at least PHP version 7.0.0
#endif
],
[AC_MSG_RESULT(ok)],
[AC_MSG_ERROR([need at least PHP 7.0.0])])

  AC_DEFINE(HAVE_PSR, 1, [Whether you have PSR])
  psr_sources="psr.c"
  PHP_NEW_EXTENSION(psr, $psr_sources, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)
fi
