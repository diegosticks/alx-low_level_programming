#include "main.h"

/**
 * main - Prints Main as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {5f, 70, 75, 74, 63, 68, 61, 72};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
