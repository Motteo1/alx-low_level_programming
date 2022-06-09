#include <stdio.h>

/**
 * main - print 1 to 100
 * multiples of 3 with Fizz
 * multiples of 5 with Buzz
 * and multiples of both 3 and 5 with FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
	int 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (1 % 3 == 0)
			{
				printf("Fizz");
			}
			if (1 % 5 == 0)
			{
				printf("Buzz")
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf("");
	}
	printf('\n');
	return (0);
}