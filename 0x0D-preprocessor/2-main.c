#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%s\n",__FILE__);
	return (0);
}
