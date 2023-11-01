#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return : 0
 */
void _puts_recursion(char *s);
int string_length(char *s)
{
int c = 0;
while(*&s[c] != '\0')
c++;
return c;
}
