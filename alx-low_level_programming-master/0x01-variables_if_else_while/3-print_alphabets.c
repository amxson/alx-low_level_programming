#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	c = 65;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
