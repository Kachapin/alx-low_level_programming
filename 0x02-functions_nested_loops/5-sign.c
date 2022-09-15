Task 5.txt
Who has access
A
System properties
Type
Text
Size
350 bytes
Storage used
350 bytes
Location
0x02. C - Functions, nested loops
Owner
Antony Bahati
Modified
Sep 13, 2022 by Antony Bahati
Opened
3:06 AM by me
Created
Sep 13, 2022
No description
Viewers can download
#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
