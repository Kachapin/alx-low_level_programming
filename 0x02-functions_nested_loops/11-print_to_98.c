Task 11.txt
Who has access
A
System properties
Type
Text
Size
406 bytes
Storage used
406 bytes
Location
0x02. C - Functions, nested loops
Owner
Antony Bahati
Modified
Sep 13, 2022 by Antony Bahati
Opened
3:09 AM by me
Created
Sep 13, 2022
No description
Viewers can download
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
