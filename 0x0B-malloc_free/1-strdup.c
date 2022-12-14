#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a keyboard to a newly allocated
 * space in memory which contains a copy of string
 * @str: pointer to the string beiing duplicated
 * Return: NULL if string is NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
