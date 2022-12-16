#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
long int n;
long int max;
long int i;
n = 612852475143;
max = -1;
while (n % 2 == 0)
{
max = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
if (n > 2)
max = n;
printf("%1d\n", max);
return (0);
}

while (inc++ < number / 2)
{
if (number % inc == 0)
{
number /= 2;
continue;
}
for (inc = 3; inc < number / 2; inc; += 2)
{
if (number % inc == 0)
number /= inc;
}
}
printf("1d\n", number);
return (0);
}

