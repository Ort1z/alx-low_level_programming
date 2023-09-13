#include "main.h"

/**
 * _islower - Check lowercase c and return 0
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
