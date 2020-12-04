#include <stdio.h>

int main()
{
    int x, polynomial;

    printf("enter value of x:");
    scanf("%d", &x);

    polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("polynomial value:%d\n",polynomial);
}