#include "main.h"
#include <string.h>

/*
 * _strncpy - a function to copy string
 * @dest: first input
 * @src: source input
 * @n: second input
 *
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
