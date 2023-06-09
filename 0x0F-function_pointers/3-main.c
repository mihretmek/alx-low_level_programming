#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculator
 * @argc: arguments
 * @argv: array of arguments
 * Return: answer
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a, b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);

		if (!func)
		{
			printf("Error\n");
			exit(99);
		}

		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}

	printf("Error\n");
	exit(98);
}
