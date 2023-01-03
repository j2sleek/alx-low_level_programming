#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: integer parameter
 * Return: absoulte value
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i == 0)
		return (0);
	else
		return (i);
}
