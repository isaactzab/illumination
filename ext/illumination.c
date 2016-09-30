
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "illumination.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *illumination_components_file_exception_fileexception_ce;
zend_class_entry *illumination_components_file_exception_accessdeniedexception_ce;
zend_class_entry *illumination_components_file_exception_filenotfoundexception_ce;
zend_class_entry *illumination_components_file_exception_unexpectedtypeexception_ce;
zend_class_entry *illumination_components_file_exception_uploadexception_ce;

ZEND_DECLARE_MODULE_GLOBALS(illumination)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(illumination)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Illumination_Components_File_Exception_FileException);
	ZEPHIR_INIT(Illumination_Components_File_Exception_AccessDeniedException);
	ZEPHIR_INIT(Illumination_Components_File_Exception_FileNotFoundException);
	ZEPHIR_INIT(Illumination_Components_File_Exception_UnexpectedTypeException);
	ZEPHIR_INIT(Illumination_Components_File_Exception_UploadException);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(illumination)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_illumination_globals *illumination_globals TSRMLS_DC)
{
	illumination_globals->initialized = 0;

	/* Memory options */
	illumination_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	illumination_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	illumination_globals->cache_enabled = 1;

	/* Recursive Lock */
	illumination_globals->recursive_lock = 0;

	/* Static cache */
	memset(illumination_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_illumination_globals *illumination_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(illumination)
{

	zend_illumination_globals *illumination_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(illumination_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(illumination_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(illumination)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(illumination)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_ILLUMINATION_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_ILLUMINATION_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_ILLUMINATION_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_ILLUMINATION_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_ILLUMINATION_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(illumination)
{
	php_zephir_init_globals(illumination_globals TSRMLS_CC);
	php_zephir_init_module_globals(illumination_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(illumination)
{

}


zend_function_entry php_illumination_functions[] = {
ZEND_FE_END

};

zend_module_entry illumination_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_ILLUMINATION_EXTNAME,
	php_illumination_functions,
	PHP_MINIT(illumination),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(illumination),
#else
	NULL,
#endif
	PHP_RINIT(illumination),
	PHP_RSHUTDOWN(illumination),
	PHP_MINFO(illumination),
	PHP_ILLUMINATION_VERSION,
	ZEND_MODULE_GLOBALS(illumination),
	PHP_GINIT(illumination),
	PHP_GSHUTDOWN(illumination),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_ILLUMINATION
ZEND_GET_MODULE(illumination)
#endif
