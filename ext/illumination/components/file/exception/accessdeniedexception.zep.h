
extern zend_class_entry *illumination_components_file_exception_accessdeniedexception_ce;

ZEPHIR_INIT_CLASS(Illumination_Components_File_Exception_AccessDeniedException);

PHP_METHOD(Illumination_Components_File_Exception_AccessDeniedException, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_illumination_components_file_exception_accessdeniedexception___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(illumination_components_file_exception_accessdeniedexception_method_entry) {
	PHP_ME(Illumination_Components_File_Exception_AccessDeniedException, __construct, arginfo_illumination_components_file_exception_accessdeniedexception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};