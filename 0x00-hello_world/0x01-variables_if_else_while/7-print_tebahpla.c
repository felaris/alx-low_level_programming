#include <stdio.h>
/**
*main - Displays lowercase reversed alphabet.
*
*Return:0 always (Success)
*/
int main(void)
{
int i;

for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
