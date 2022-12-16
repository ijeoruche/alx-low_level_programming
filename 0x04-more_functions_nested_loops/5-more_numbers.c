#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
int nl, n2;
for (nl = 0; nl < 10; n1++)
{
for (n2 = 0; n2 < 15; n2++)
{
if (n2 >= 10)
_putchar(n2 / 10 + '0');
_putchar(n2 % 10 + '0');
}
_putchar('\n');
}

}
