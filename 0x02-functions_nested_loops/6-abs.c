Task 6.txt
Who has access
A
System properties
Type
Text
Size
289 bytes
Storage used
289 bytes
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
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
