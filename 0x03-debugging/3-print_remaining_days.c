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
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
days_in_month[2] = 29; // Update February to have 29 days in a leap year
}

if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
int remaining_days = 0;
for (int i = month + 1; i <= 12; i++)
{
remaining_days += days_in_month[i];
}
remaining_days += days_in_month[month] - day;

printf("Day of the year: %d\n", get_day_of_year(month, day, year));
printf("Remaining days: %d\n", remaining_days);
}
}

/**
* get_day_of_year - calculates the day of the year for a given date
* @month: month in number format
* @day: day of month
* @year: year
* Return: day of the year
*/
int get_day_of_year(int month, int day, int year)
{
int day_of_year = day;
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
days_in_month[2] = 29; // Update February to have 29 days in a leap year
}

for (int i = 1; i < month; i++)
{
day_of_year += days_in_month[i];
}

return day_of_year;
}

