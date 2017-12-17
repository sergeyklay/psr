/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "../../../config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_UPLOADED_FILE_INTERFACE_H
#define PSR_HTTP_MESSAGE_UPLOADED_FILE_INTERFACE_H 1

#include <php.h>
#include "../../../php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_uploadedfileinterface_arginfo_get_stream, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ppsr_http_message_uploadedfileinterface_arginfo_move_to, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, targetPath, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uploadedfileinterface_arginfo_get_size, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uploadedfileinterface_arginfo_get_error, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uploadedfileinterface_arginfo_get_client_filename, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_uploadedfileinterface_arginfo_get_client_media_type, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_uploadedfileinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_uploadedfileinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_UPLOADED_FILE_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
