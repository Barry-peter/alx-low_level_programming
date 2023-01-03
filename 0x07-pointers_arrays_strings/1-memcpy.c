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
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/

	return (dest);
}
