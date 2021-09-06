#include "main.h"
/**
 * _strlen - to find the length of a string
 * @s: points to the string to check
 * Return: void
*/


int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;

return (i);
}
