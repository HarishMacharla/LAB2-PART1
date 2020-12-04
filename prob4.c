#include <stdio.h>

int main()
{
    int amount;
    float tax,total_price;

    printf("enter an amount:%c",'$');
    scanf("%d", &amount);

    tax=(0.05*amount);
    printf("enter tax:%c %.2f\n",'$',tax);

    total_price= tax+amount;

    printf("with tax added:%c %f\n",'$',total_price);

    return 0;   
}
