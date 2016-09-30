namespace Illumination\Components\File\Exception;


class AccessDeniedException extends FileException
{
    /**
     * Constructor.
     *
     * @param string $path The path to the accessed file
     */
    public function __construct(string path)
    {
        parent::__construct(sprintf("The file %s could not be accessed", path));
    }
}