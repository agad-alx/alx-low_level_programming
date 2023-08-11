#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Print the generated number */
    printf("%d is ", n);

    /* Check if the number is positive, zero, or negative */
    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return (0);
}
