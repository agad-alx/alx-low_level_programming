#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1); /* Return 1 to indicate an error */
}
