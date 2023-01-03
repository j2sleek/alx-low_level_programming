#include "main.h"
/**
 * jack_bauer - print every minute starting from 00:00 to 23:59
 * Return: minutes
 */
void jack_bauer(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; ((i == 2) ? (j <= 3) : (j <= 9)); j++)
		{
		for (k = 0; k <= 5; k++)
		{
		for (l = 0; l <= 9; l++)
		{
		_putchar(i);
	_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
		}
		}
		}
	}
}
