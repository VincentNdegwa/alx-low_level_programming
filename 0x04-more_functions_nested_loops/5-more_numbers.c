#include "main.h"
/**
 * more_numbers - functions that print 10 times the numbers, form 0 to 14
 * _putchar only 3 times
 * Return: 0 - 14 10 times
 */
void more_numbers(void)
{

int i, ro;

for (ro = 0; ro <= 9; ro++)
{
for (i = 0; i <=  14; i++)
{
if (i > 9)

_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
