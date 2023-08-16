#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - print whether a number is positive, negative, or zero
 * @i: integer to be checked
 *
 * This function takes an integer as input and prints whether it is positive,
 * negative, or zero, followed by a new line.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
