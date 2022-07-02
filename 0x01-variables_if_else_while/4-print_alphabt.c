#include<stdio.h>

/**
* main - entry point
*
* Return: always returns 0
*/

int main(void)
{
int 1w = 'a';
while (1w <= 'z')
{
if (1w == 'e' || 1w == 'q')
{
1w += 1;
}
else
{
putchar(1w);
1w += 1;
}
}
putchar('\n');
return (0);
}
