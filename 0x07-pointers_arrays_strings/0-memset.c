#include "main.h"
/**
 * _memcet - fills te first n byte of the memory area
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: this is the int to be used over there
 * Return: return the pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
