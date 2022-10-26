#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: the string
 *
 * Return: the length of a string
 *
 */

int _strlen(char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
