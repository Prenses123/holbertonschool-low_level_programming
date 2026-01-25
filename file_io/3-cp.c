#include "main.h"

/**
 * main - Bir dosyanın içeriğini başka bir dosyaya kopyalar.
 * @argc: Argüman sayısı.
 * @argv: Argüman vektörü.
 *
 * Return: Başarı durumunda 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, r_status, w_status;
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
		close(f_from);
		exit(99);
	}

	while ((r_status = read(f_from, buffer, 1024)) > 0)
	{
		w_status = write(f_to, buffer, r_status);
		if (w_status == -1 || w_status != r_status)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}

	return (0);
}
