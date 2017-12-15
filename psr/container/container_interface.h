
/* $Id$ */

#ifndef PHP_PSR_H

#include "php_psr.h"
#endif

#ifndef PHP_PSR_11_CONTAINER_INTERFACE_H
#define PHP_PSR_11_CONTAINER_INTERFACE_H 1

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_get, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_has, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

extern zend_class_entry *psr_container_containerinterface_ce;

PSR_STARTUP_FUNCTION(container_containerinterface);

#endif /* PHP_PSR_11_CONTAINER_INTERFACE_H */
