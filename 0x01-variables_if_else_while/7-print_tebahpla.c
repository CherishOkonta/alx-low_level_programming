#include <stdio.h>
/**
 *main- print the alphabets in reverse
 *Return: return 0 always
 */
int main(void)
{
char le;
for (le = 'z'; le >= 'a'; le--)
putchar(le);
putchar('\n');
return (0);
}
