#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the remaining days
 * @month: the current month
 * @day: the current day
 * @year: the current year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
	{
		int leap_days;

		leap_days = 366;

		if (day >= 60 && month > 2)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_days - day);
	}
	else
	{
		if (day == 60 && month == 2)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			int standard_days;

			standard_days = 365;

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", standard_days - day);
		}
	}
}
