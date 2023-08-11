#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints single-digit numbers of base 10 starting from 0
 * followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
