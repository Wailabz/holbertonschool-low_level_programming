#include "main.h"
#include <stdio.h>
/**
 * recursion - entry point
 * description: function that prints a string, followed by a new line.
 *
 * return : Always 0.
 */
void _puts_recursion(char *s);
{
if (*s !=0)
{
_putchar(*s);
_puts_recursion(s +1);
}
else
{
_putchar('\n');
}
}
