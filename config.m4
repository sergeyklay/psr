dnl $Id$

PHP_ARG_ENABLE(psr, whether to enable PSR support,
[  --enable-psr           Enable PSR support])

AC_MSG_CHECKING(for php version)

if test ! -z "$phpincludedir"; then
    PHP_VERSION=`grep 'PHP_VERSION ' $phpincludedir/main/php_version.h | sed -e 's/.*"\([[0-9\.]]*\)".*/\1/g' 2>/dev/null`
else
	if test ! -z "$PHP_CONFIG"; then
		PHP_VERSION=`$PHP_CONFIG --version 2>/dev/null`
	else
		AC_MSG_ERROR([php-config not found])
	fi
fi

if test x"$PHP_VERSION" = "x"; then
	AC_MSG_ERROR([failed to detect PHP version, please report])
else
    PHP_MAJOR_VERSION=`echo $PHP_VERSION | cut -d '.' -f 1 2>/dev/null`
fi

if test $PHP_MAJOR_VERSION -lt 7; then
    AC_MSG_ERROR([To use PSR extension you'll need at least PHP 7.0.0 or newer. PHP $PHP_VERSION found])
else
	AC_MSG_RESULT([$PHP_VERSION (ok)])
fi

if test "$PHP_PSR" != "no"; then
	AC_DEFINE(HAVE_PSR, 1, [Whether you have PSR])

	PHP_NEW_EXTENSION(psr,
		psr.c                                          \
		psr/container/container_exception_interface.c  \
		psr/container/container_interface.c            \
		psr/container/not_found_exception_interface.c  \
		psr/http/message/message_interface.c           \
		psr/http/message/request_interface.c           \
		psr/http/message/response_interface.c          \
		psr/http/message/server_request_interface.c    \
		psr/http/message/stream_interface.c            \
		psr/http/message/uploaded_file_interface.c     \
		psr/http/message/uri_interface.c,
		$ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)

	PHP_INSTALL_HEADERS([ext/psr], [php_psr.h])
fi
