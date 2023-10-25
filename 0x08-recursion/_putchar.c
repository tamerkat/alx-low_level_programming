#include <unistd.h>
#include "main.h"

/**
 * _putchar -Entry point
 * @c: pointer
 * Return: on sucuss
 * */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
