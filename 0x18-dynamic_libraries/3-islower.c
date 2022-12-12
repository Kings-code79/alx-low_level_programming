#include "main.h"
/**
 * _islower - checks if a charatcter is lowercse
 *  @c: character to be checked
 *
 *  Return: 1 if lowercase and 0 othrwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
