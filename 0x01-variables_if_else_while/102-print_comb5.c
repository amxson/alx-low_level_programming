#include <stdio.h>
/**
*main - Prints all combinations of two two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(32);
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x / 10 != 9 || x % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
