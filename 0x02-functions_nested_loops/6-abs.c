#include "main.h"
/**
 * _sbs - computes absolute val of int
 *
 * @x: funtion parameter
 * Return: -x or x
 */
int _abs(int x)
{
	if (x < 0)
	
		return (-x);
	else if (x >= 0)
	{
		return (x);
	}
	
	return (0);
}
