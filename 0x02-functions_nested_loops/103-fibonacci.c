#include <stdio.h>

/**
 * main - a program that finds and prints the sum
 * of the even-valued terms, followed by a new line.
 *
 * Return: Always 0.
 */


int main(void)
{

	unsigned long sum1 = 0, sum2 = 1, fibsum;

	float tot_sum;



	while (1)

	{
		fibsum = sum1 + sum2;
		if (fibsum > 4000000)
			break;


		if ((fibsum % 2) == 0)

			tot_sum += fibsum;
		sum1 = sum2;
		sum2 = fibsum;
	}

	printf("%.0f\n", tot_sum);

	return (0);
}


