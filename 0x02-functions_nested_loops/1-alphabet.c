#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet of letters
 *
 * Return: void
 */

char print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		putchar(i);
	}
	putchar('\n');
}
