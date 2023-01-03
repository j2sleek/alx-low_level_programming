#include "main.h"
/**
 * jack_bauer - print every minute starting from 00:00 to 23:59
 * Return: minutes
 */
void jack_bauer(void)
{
	int i, j, k, l, m;

	j = 0;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			m = j <= 3;
		else
			m = j <=9;
		for (j; m; j++)
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
