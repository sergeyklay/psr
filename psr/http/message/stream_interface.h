/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_STREAM_INTERFACE_H
#define PSR_HTTP_MESSAGE_STREAM_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_close, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_detach, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_get_size, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_tell, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_eof, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_is_seekable, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_streaminterface_arginfo_seek, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, offset, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, whence, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_rewind, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_is_writable, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_streaminterface_arginfo_write, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, string, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_is_readable, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_streaminterface_arginfo_read, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, length, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_get_contents, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_streaminterface_arginfo_get_metadata, 0, ZEND_RETURN_VALUE, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_streaminterface_arginfo_to_string, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_streaminterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_streaminterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_STREAM_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
