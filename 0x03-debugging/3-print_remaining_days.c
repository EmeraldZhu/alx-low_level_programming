#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
	int days_in_month;
	int day_of_year = 0;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	for (int i = 1; i < month; i++)
	{
		switch (i)
		{
			case 4: case 6: case 9: case 11:
				days_in_month = 30;
				break;
			case 2:
				days_in_month = (is_leap_year) ? 29 : 28;
				break;
			default:
				days_in_month = 31;
				break;
		}

		day_of_year += days_in_month;
	}

	day_of_year += day;

	if (is_leap_year && month > 2)
	{
		day_of_year++;
	}

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", is_leap_year ? (366 - day_of_year) : (365 - day_of_year));
}
