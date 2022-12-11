#include <stdio.h>
/**
*main - Displays the alphabets.
*
*Return: 0 Always (Success)
*/
int main(void)
{
char alx[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alx[i]);
}
putchar('\n');
return (0);
}
