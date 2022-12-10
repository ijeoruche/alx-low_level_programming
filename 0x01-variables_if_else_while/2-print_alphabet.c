#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
{
	char small = tolower(x);
}
	putchar(small);
}
	for (x = 'a'; x <= 'z'; x++)
{
	char big = toupper(x);

	putchar(big);
}
	putchar('\n');
	return (0);
}
