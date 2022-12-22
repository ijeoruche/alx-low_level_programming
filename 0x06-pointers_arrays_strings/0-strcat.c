#include "main.h"
#include <stdio.h>

/**
 * _strcat - cancatennates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)

{
	int length, b;

	length = 0

while
(dest[length] != '\0')

{

	length++;

}

for
(b = 0; src[b] != '\0'; b++, length++)
{
dest[length] = src[b];
}
dest[length] = '\0';
return (dest);
}
