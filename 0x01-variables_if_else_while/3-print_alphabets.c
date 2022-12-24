#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower, upper;

	lower = 97;
	upper = 90;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 120)
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}
