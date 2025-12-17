#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;  // dest-in başlanğıcını yadda saxla

	/* hər simvolu kopyala */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';  // terminasiya null byte əlavə et
	return ptr;    // başlanğıc pointer-i qaytar
}
