#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sum, sum1, ans;

	sum = 0;
	sum1 = 1;


	for (i >= 0; i <= 50; i++)

	{
		ans = sum + sum1;
		printf("%d\n", ans);

		sum = sum1;
		sum1 = ans;


		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}



