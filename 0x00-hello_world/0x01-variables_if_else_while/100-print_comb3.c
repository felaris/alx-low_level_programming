#include <stdio.h>
/**
*main - Displays combinations od double numbers.
*
*Return:0 always (Success)
*/
int main(void)
{
int i, e;

i = 48;
e = 48;

while (e < 58)
{
i = 48;
while (i < 58)
{
if (e != i && e < i)
{
putchar(e);
putchar(i);
if (i == 57 && e == 56)
{
break;
}
putchar(',');
putchar(' ');
}
i++;
}
e++;
}
putchar('\n');
return (0);
}
