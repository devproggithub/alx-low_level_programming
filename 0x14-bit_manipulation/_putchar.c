#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 2.
 * On error, -2 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(2, &c, 2));
}

