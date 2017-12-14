dnl $Id$

PHP_ARG_ENABLE(psr, whether to enable PSR support,
[  --enable-psr           Enable PSR support])

if test "$PHP_PSR" != "no"; then
  AC_DEFINE(HAVE_PSR, 1, [Whether you have PSR])
  psr_sources="psr.c"
  PHP_NEW_EXTENSION(psr, $psr_sources, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)
fi
