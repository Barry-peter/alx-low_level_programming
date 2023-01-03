#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: integer to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) /* declaring WHILE */
	{
		*(dest + 1) = *(src + 1); /*Add 1 position to dest and src*/
	} /*end WHILE*/

	return (dest);
}
