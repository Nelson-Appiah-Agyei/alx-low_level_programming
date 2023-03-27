#include "main.h"

/**
 * _strlen - compute the length of a string
 * @s: represent a string
 * Return: lenght
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		int longi++;
		s++;
	}
	return (longi)
}
