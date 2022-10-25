#include <stdio.h>

/**
 * main - function prints numbers from 0 to 100,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int r = 1;

	while (r <= 100)
	{
		if (r % 3 == 0 && r % 5 == 0)
		
			printf("FizzBuzz");
		
		else if (r % 5 == 0)
		{
			if (r == 100)
			{
				printf("Buzz");

				printf("\n");
			}
			else
				printf("Buzz");
		}
		else if (r % 3 == 0)
			printf("Fizz");
		else
			printf("%d", r);
	r++;
	}
return (0);
}
