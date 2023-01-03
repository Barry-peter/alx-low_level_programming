#include "main.h"

/**
 * _memset - function to fill the memory with constant byte
 * @s: a string
 * @b: a character
 * @n: an integer
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		/*Delacring FOR*/
		for (i = 0; i < n; i++)
		{
			*(s + i) = b; /*add 1 position s*/
		} /*END FOR*/
		return (s);
}
