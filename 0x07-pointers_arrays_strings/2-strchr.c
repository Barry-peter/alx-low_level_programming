#include "main.h"

/**
 * _strchr - functon to search a string in char
 * @s: a string
 * @c: a charcter
 *
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}
		++s;
	}

	if (*s == c)

	{
		return (s);
	}
	return (0);/* values null*/
}
