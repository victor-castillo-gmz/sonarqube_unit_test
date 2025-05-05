#include <math.h>
#include <stdexcept>

double divide(int x, int y)
{
    if (y != 0)
        return x / y;
    else
        return 0;
}