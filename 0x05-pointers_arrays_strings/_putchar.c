#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point for
 * @c: the character
 * REturn: awlays succuss
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
