#include "main.h"

/**
 *_abs - Check main
 * @r: An integr input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number x
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
