#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes the character c to stdout
 * @c: the character to print
 *Return: return 1 on success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
