#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate ist occurrence of char in strings and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

			if (s[i] == c)
				return (&s[i]);

			else
				return (NULL);
}
