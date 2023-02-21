#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet that is in lowercase.
**/

void print_alphabet_x10(void)
{
	char a, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}

		_putchar('\n');
	}
}

