#include "main.h"

/**
 * print_square - Check the main file
 * @size: Value of square size
 * Description: A function that prints a square , followed by a new line
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <	size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
