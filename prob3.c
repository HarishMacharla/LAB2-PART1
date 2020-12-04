#include <stdio.h>

int main()
{
    float radius, volume;

    printf("enter radius:");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    printf("volume of a sphere of radius %.1f meters:%.2f\n", radius, volume);

    return 0;
}