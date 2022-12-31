#include <stdio.h>
/**
 * main - print all possible combinations of two two-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);

					if (!((i == 57 && k == 56) && (k == 57 && l == 57)))
					{
						putchar(44);
						putchar(32);
					}
				}
				l = 48;
			}
		}
	}
	putchar(10);
	return (0);
}
