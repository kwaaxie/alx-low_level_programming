#include <stdio.h>
/**
 * main - print frm 0-9 using putchar
 * Return: 0 on success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
