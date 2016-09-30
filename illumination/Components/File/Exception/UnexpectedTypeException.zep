namespace Illumination\Components\File\Exception;

class UnexpectedTypeException extends FileException
{
    public function __construct(string value, string expectedType)
    {
        parent::__construct(
        	sprintf(
        		"Expected argument of type %s, %s given",
        		expectedType, 
        		typeof value === "object" ? get_class(value) : typeof value
        	)
        );
    }
}
