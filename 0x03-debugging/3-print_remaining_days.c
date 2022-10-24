#include <stdio.h>
#include "main.h"

/**
 * preint_remaining_days - function converts a date
 * determining days left in a year,
 * while considering the leap year
 * @mm: month of the year
 * @dd: day of the month
 * @yr: year
 */

void print_remaining_days(int mm, int dd, int yr)
{
	if (yr % 4 == 0 || ((yr % 100 == 0) && (yr % 400 == 0)))
	{
		if (mm > 2 && dd >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", dd);
		
		printf("Remaining days: %d\n", 366 - dd);
	}
	else
	{
		if (mm == 2 && dd == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", mm, dd - 31, yr);
		}
		else
		{
			printf("Day of the year: %d\n", dd);

			printf("REmaining days: %d\n", 366 - dd);
		}
	}
}
