
/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>

#include "psr.h"
#include "php_psr.h"

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(psr)
{
	PHP_PSR_MODULE_STARTUP(container_containerexceptioninterface);
	PHP_PSR_MODULE_STARTUP(container_containerinterface);
	PHP_PSR_MODULE_STARTUP(container_notfoundexceptioninterface);
	PHP_PSR_MODULE_STARTUP(http_message_uriinterface);

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(psr)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(psr)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PSR_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PSR_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PSR_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PSR_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__);
	php_info_print_table_end();
}
/* }}} */

/* {{{ psr_functions[]
 *
 * Every user visible function must have an entry in psr_functions[].
 */
const zend_function_entry psr_functions[] = {
	PHP_FE_END /* Must be the last line in psr_functions[] */
};
/* }}} */

/* {{{ psr_module_entry
 */
zend_module_entry psr_module_entry = {
	STANDARD_MODULE_HEADER,
	PHP_PSR_NAME,
	psr_functions,
	PHP_MINIT(psr),
	PHP_MSHUTDOWN(psr),
	NULL, /* RINIT */
	NULL, /* RSHUTDOWN */
	PHP_MINFO(psr),
	PHP_PSR_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_PSR
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(psr)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
