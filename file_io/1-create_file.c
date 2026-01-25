#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_written;
	int l = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return(-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
		n_written = write(fd, text_content, l);
		if (n_written == -1 || n_written != len)
		{
			close(fd);
			return(-1);
		}
	}
	close(fd);
	return(1);
}
