#include <stdio.h>
/**
* main - displays base 16 numbers.
*
* Return:0 always (Success)
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
