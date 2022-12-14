#include <stdio.h>
/**
 *main- entry point
 *Description: computes and prints the sum of all multiples
 *5 below 1024 (excluded), followed by a new line
 *Return: return 0
 */
int main(void)
{
int i = 0;
long int a = 0, b = 1, next;
while (i < 50)
{
next = a + b;
a = b;
b = next;
printf("%lu", next);
if (i < 49)
{
printf(" , ");
}
i++;
}
putchar('\n');
return (0);
}
