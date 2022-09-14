#include "main.h"
/**
* _islower - program to check lowercase characters
* @c: the int used in the function
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
