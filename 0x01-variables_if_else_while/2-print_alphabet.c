#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point 
 * Description : Prints alphanet in lower case 
 * Return: 0 success
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
