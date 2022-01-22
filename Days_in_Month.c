#include <stdio.h>

int is_leap_year(int year);
int days_in_month(int, int);

int main()
{
	printf("Enter the year number and month number : ");
	int year, month;
	scanf("%d %d", &year, &month);

	if (month < 12 || month > 0)
	{
		printf("Number of days : %d\n", days_in_month(year, month));
		return 0;
	}
	printf("Invalid month input.\n");

}

int days_in_month(int year, int month)
{
	if (month == 2) return (is_leap_year(year) ? 29 : 28);
	if ((month < 8 && month % 2 == 1) || (month >= 8 && month % 2 == 0)) return 31;
	return 30;
}

int is_leap_year(int year)
{
	if (year % 400 == 0) return 1;
	if (year % 100 == 0) return 0;
	if (year % 4 == 0) return 1;
	return 0;
}