#include "main.h"
int _putchar(char c);

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4) followed by a new line
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
	}

	_putchar('\n');
}

