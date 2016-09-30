
#ifdef HAVE_CONFIG_H
#include "../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../php_ext.h"
#include "../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Illumination_Components_File_Exception_UploadException) {

	ZEPHIR_REGISTER_CLASS_EX(Illumination\\Components\\File\\Exception, UploadException, illumination, components_file_exception_uploadexception, illumination_components_file_exception_fileexception_ce, NULL, 0);

	return SUCCESS;

}

