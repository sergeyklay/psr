/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "../../config.h"
#endif

#ifndef PSR_CONTAINER_CONTAINER_EXCEPTION_INTERFACE_H
#define PSR_CONTAINER_CONTAINER_EXCEPTION_INTERFACE_H 1

#include <php.h>
#include "../../php_psr.h"

BEGIN_EXTERN_C()

extern PHP_PSR_API zend_class_entry *psr_container_containerexceptioninterface_ce;

ZEND_MINIT_FUNCTION(psr_container_containerexceptioninterface);

END_EXTERN_C()

#endif /* PSR_CONTAINER_CONTAINER_EXCEPTION_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
