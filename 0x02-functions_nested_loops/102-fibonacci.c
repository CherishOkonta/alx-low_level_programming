#include <stdio.h>
/**
 *main- entry point
 *Description: computes and prints the sum of all multiples
 *5 below 1024 (excluded), followed by a new line
 *Return: return 0
 */
int main(void)
{
int c;
long int n1, n2, fn;
n1 = 1;
n2 = 2;
printf("%ld, %ld", n1, n2);
for (c = 0; c < 48; c++)
{
fn = n1 + n2;
printf(", %ld", fn);
n1 = n2;
n2 = fn;
}
printf("\n");
return (0);
}
