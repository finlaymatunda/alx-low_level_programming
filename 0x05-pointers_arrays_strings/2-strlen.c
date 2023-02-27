#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string length
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t ln = 0;

	while (*str++)
		ln++;

	return (ln);
}
