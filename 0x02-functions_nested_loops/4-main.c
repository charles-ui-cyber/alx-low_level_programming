#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *@c: the character to be checked.
 * Return: Always 0.
 */
int _isalpha(int c);

int main(void)
{
int r;
r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);

}
