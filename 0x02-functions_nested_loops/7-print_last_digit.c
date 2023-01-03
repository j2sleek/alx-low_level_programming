#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: integer parameter
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j *= -1;
	_putchar('0' + j);
	return (j);
}
