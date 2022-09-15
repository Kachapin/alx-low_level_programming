Task 7.txt
Who has access
A
System properties
Type
Text
Size
321 bytes
Storage used
321 bytes
Location
0x02. C - Functions, nested loops
Owner
Antony Bahati
Modified
Sep 13, 2022 by Antony Bahati
Opened
3:07 AM by me
Created
Sep 13, 2022
No description
Viewers can download
#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number.
 *@n: The number in question.
 *
 *Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
