#include <stdio.h>
#include "main.h"

/**
 * isalpha - checks for  a letter, lowercase or uppercase.
 *
 * Return: 1 if c is letter, otherwise 0
**/

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
