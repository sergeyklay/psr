/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_REQUEST_INTERFACE_H
#define PSR_HTTP_MESSAGE_REQUEST_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

#include "uri_interface.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_requestinterface_arginfo_get_request_target, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_requestinterface_arginfo_with_request_target, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, requestTarget, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_requestinterface_arginfo_get_method, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_requestinterface_arginfo_with_method, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, method, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_requestinterface_arginfo_get_uri, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_requestinterface_arginfo_with_uri, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_OBJ_INFO(0, uri, Psr\\Http\\Message\\UriInterface, 0)
	ZEND_ARG_TYPE_INFO(0, preserveHost, IS_UNDEF, 1)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_requestinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_requestinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_REQUEST_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
