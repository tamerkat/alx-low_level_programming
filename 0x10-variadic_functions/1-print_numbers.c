#include "main.h"

/**
 * sum_them_all - Entry point
 * @n: counter the argv
 * Return: always succuss
*/

int sum_them_all(const unsigned int n, ...)
{
    int i, sum = 0;

    if (n == 0)
        return (0);

    va_list argv;
    va_start(argv, n);

    for (i = 0; i < n; i++)
        sum += va_arg(argv, int);

    va_end(argv);
    return (sum);
}
