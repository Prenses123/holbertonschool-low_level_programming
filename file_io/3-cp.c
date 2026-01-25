#include "main.h"

#include "main.h"
/**
 * main - Bir dosyayi baska bir dosyaya kopyalar.
 * @argc: Arguman sayisi.
 * @argv: Arguman vektoru.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd(f_from);
		exit(99);
	}
	while ((r = read(f_from, buffer, 1024)) > 0)
	{
		w = write(f_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fd(f_from);
	close_fd(f_to);
	return (0);
}
