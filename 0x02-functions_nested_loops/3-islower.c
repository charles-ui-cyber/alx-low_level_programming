#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */
void test_islower(int n)
{
int r;

r = _islower(n);
putchar(r + '0');
putchar('\n');
}
int main(void)
{
test_islower('H');
return (0);
}

