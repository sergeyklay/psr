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

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_scheme, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_authority, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_user_info, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_host, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_port, IS_LONG, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_path, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_query, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_get_fragment, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_scheme, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_user_info, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 1)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_host, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_port, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 1)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_path, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_query, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(psr_http_message_uriinterface_arginfo_with_fragment, ZEND_RETURN_VALUE, 1, "Psr\\Http\\Message\\UriInterface", 0)
	ZEND_ARG_TYPE_INFO(0, fragment, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(psr_http_message_uriinterface_arginfo_to_string, IS_STRING, 0)
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
