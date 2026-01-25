#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function
 * @filename: name of the file
 * @letters: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
    	ssize_t n_read, n_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0644);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
    	if (buffer == NULL)
    	{
        	close(fd);
        	return (0);
    	}
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
    	{
        	free(buffer);
        	close(fd);
        	return (0);
    	}
	n_written = write(1, buffer, n_read);
        if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_written);
}
