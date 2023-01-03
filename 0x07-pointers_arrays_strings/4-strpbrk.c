#include "main.h"

/**
 * _strpbrk - locates a string for any of a set of bytes
 * @s: a string
 * @accept: character in str1 that matches one of the characters in str2
 *
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
