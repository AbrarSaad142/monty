#include "monty.h"

/**
*is_number - check if string represents a valid integer number.
*@str: the string
*Return: return 1 mif succes else 0.
*/
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
