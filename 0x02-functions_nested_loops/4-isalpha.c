#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: integer parameter
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))
		? return (1)
		: return (0);
}
