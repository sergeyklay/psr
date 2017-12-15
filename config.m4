dnl $Id$

PHP_ARG_ENABLE(psr, whether to enable PSR support,
[  --enable-psr           Enable PSR support])

dnl Check PHP version:
AC_MSG_CHECKING(for PHP version)
if test ! -z "$phpincludedir"; then
    PHP_VERSION=`grep 'PHP_VERSION ' $phpincludedir/main/php_version.h | sed -e 's/.*"\([[0-9\.]]*\)".*/\1/g' 2>/dev/null`
elif test ! -z "$PHP_CONFIG"; then
    PHP_VERSION=`$PHP_CONFIG --version 2>/dev/null`
fi

if test x"$PHP_VERSION" = "x"; then
    AC_MSG_WARN([none])
else
    PHP_MAJOR_VERSION=`echo $PHP_VERSION | cut -d '.' -f 1 2>/dev/null`
    AC_MSG_RESULT([$PHP_VERSION])
fi

if test $PHP_MAJOR_VERSION -lt 7; then
    AC_MSG_ERROR([To use PSR extension you'll need at least PHP 7.0.0 or newer])
fi

if test "$PHP_PSR" != "no"; then
	AC_DEFINE(HAVE_PSR, 1, [Whether you have PSR])

	psr_sources="psr.c psr/container/container_interface.c"

	PHP_NEW_EXTENSION(psr, $psr_sources, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)

	dnl TODO: PHP_INSTALL_HEADERS
fi
