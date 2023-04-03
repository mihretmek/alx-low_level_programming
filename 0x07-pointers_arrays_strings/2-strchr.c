#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * Return: a pointer to first occurence of c
 * @s: string
 * @c: character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == 0)
			return (NULL);
	}
}
