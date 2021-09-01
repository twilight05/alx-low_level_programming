#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabets in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
int round = 0;
char letter = 'a';

while (round < 0)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
round++;
}
}
