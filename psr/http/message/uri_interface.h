/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_URI_INTERFACE_H
#define PSR_HTTP_MESSAGE_URI_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_scheme, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_authority, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_user_info, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_host, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_port, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_path, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_query, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_get_fragment, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_scheme, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, scheme)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_user_info, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, user)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_host, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, host)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_port, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, port)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_path, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_query, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, query)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_uriinterface_arginfo_with_fragment, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_INFO(0, fragment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uriinterface_arginfo_to_string, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_uriinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_uriinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_URI_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
