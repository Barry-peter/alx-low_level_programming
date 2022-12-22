#include "main.h"
#include <string.h>

/*
 * *_strncat - funnction to concatenates two string
 * @dest: first param
 * @src: source input
 * @n: second param
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
