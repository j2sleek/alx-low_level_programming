#include "main.h"
/**
 * main - function that prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
