#include <stdio.h>

/**
 * main - something
 * Return: something
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, m;

	j = 1,
	k = 2,
	m = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			m = m + j;
		}
		i = j + k;
		j = k;
		k = i;
	}

	printf("%1u\n", m);

	return (0);
}
