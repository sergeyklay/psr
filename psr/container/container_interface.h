/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_CONTAINER_CONTAINER_INTERFACE_H
#define PSR_CONTAINER_CONTAINER_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_get, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_has, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_container_containerinterface_ce;

ZEND_MINIT_FUNCTION(psr_container_containerinterface);

END_EXTERN_C()

#endif /* PSR_CONTAINER_CONTAINER_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
