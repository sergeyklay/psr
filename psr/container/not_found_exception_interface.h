/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_CONTAINER_NOT_FOUND_EXCEPTION_INTERFACE_H
#define PSR_CONTAINER_NOT_FOUND_EXCEPTION_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

BEGIN_EXTERN_C()

extern zend_class_entry *psr_container_notfoundexceptioninterface_ce;

ZEND_MINIT_FUNCTION(psr_container_notfoundexceptioninterface);

END_EXTERN_C()

#endif /* PSR_CONTAINER_NOT_FOUND_EXCEPTION_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
