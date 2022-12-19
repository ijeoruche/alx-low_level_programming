#include "main.h"

/**
 * swap_int-swaps the values of 2 integers.
 * @a:First arguement to be swapped
 * @b:second arguement to be swapped.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
