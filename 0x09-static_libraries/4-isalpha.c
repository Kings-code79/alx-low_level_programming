#include "main.h"
/**
 * _isalpha - checks if a charatcter is lowercse
 *  @c: character to be checked
 *
 *  Return: 1 if lowercase or uppercase and,  0 othrwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
