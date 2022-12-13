#include <stdio.h>
/**
 *main- Entry point
 *Return: return 0 always
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}
