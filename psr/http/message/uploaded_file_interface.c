/* $Id$ */

#include "uploaded_file_interface.h"

/* Psr\Http\Message\UploadedFileInterface */
PHP_PSR_API zend_class_entry *psr_http_message_uploadedfileinterface_ce;

/* {{{ Psr\Http\Message\UploadedFileInterface functions[]
 */
static const zend_function_entry psr_http_message_uploadedfileinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, getStream, psr_http_message_uploadedfileinterface_arginfo_get_stream)
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, moveTo, ppsr_http_message_uploadedfileinterface_arginfo_move_to)
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, getSize, psr_http_message_uploadedfileinterface_arginfo_get_size)
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, getError, psr_http_message_uploadedfileinterface_arginfo_get_error)
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, getClientFilename, psr_http_message_uploadedfileinterface_arginfo_get_client_filename)
	ZEND_ABSTRACT_ME(psr_http_message_uploadedfileinterface, getClientMediaType, psr_http_message_uploadedfileinterface_arginfo_get_client_media_type)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_uploadedfileinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\UploadedFileInterface", psr_http_message_uploadedfileinterface_methods);
	psr_http_message_uploadedfileinterface_ce = zend_register_internal_interface(&ce);

	return SUCCESS;
}
/* }}} */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
