#include <main.h>

/**
 * _isupper - check if a letter is upper
 * @x: num to be checked
 * return: 1 for upper letter or 0 for else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
