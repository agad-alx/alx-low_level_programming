#include <stdio.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet (except 'q' and 'e')
 * followed by newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
