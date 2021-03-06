#include "main.h"
#define NULL 0

/**
 * _strchr - locate 1st occurence of char in string and returns pointers there
 * @s: string search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
