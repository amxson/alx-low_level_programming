#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int p;
p = 122;
while (p >= 97)
{
putchar(p);
p--;
}
putchar('\n');
return (0);
}
