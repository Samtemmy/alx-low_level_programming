#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 **/
void rev_string(char *s)
{
	int count  = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')

