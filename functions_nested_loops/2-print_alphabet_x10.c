#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i, letter;
for (i = 1; i <= 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
