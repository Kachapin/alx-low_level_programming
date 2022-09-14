#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet of letters
 *
 * Return: void
 */

void print_alphabet()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		putchar(i);
	}
	putchar('\n');
}
