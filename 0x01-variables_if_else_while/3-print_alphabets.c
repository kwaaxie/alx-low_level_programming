#include <stdio.h>
/**
 * main - Entry point 
 * Description : Alphabet uppercase
 * Return: 0 (successfull)
 * */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
	putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	} putchar ('\n');
	return (0);
}
