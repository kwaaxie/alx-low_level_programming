#include "main.h"

/**
 * print_line - print line
 * @n: an integer
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}
