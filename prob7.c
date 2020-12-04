#include <stdio.h>

int main()
{
    int x,amount,P,Q,R,A,B,C;
    printf("enter a US dollar amount:%c",'$');
    scanf("%d",&amount);

    x=amount/20;                        
    printf("$ 20 bill:%d\n",x);

    P = amount-(x*20);
    A = P/10;
    printf("$ 10 bill:%d\n",A);

    Q = amount-((x*20)+(A*10));
    B = Q/5;
    printf("$ 5 bill:%d\n",B);

    R = amount-((x*20)+(A*10)+(B*5));
    C = R/1;
    printf("$ 1 bill:%d\n",C);

    return 0;




    
}