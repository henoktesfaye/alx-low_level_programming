#include "main.h"

/**
 * _isalpha - checks wherther it is alpahet or not
 * @c: to be checked
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
