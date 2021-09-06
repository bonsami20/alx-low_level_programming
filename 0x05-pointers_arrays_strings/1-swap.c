#include "main.h"

/**
 * swap_int - function that takes two pointers to integers as argument
 * and swaps the values of two integers
 *
 * @a: int pointer variable
 * @b: int pointer variable
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
