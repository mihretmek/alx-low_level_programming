#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gets random number and checks if positive, neative or zero
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is 0\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}