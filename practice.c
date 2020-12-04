#include <stdio.h>

int main()
{
    int x, y, z, max;
    scanf("%1d%1d%1d", &x, &y, &z);

    if (x > y)
    {
        if (x > z)
            max = x;
        else

            max = z;
    }

    else
    {
        if (y > z)
            max = y;
        else
            max = z;
    }
    printf("the max:%d\n", max);
    return 0;
}