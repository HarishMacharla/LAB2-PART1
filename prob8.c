#include <stdio.h>

int main()
{
    float loan_amount,interest_rate,monthly_payment,amount,monthly_interest_rate;
    printf("enter amount of loan:");
    scanf("%f",&loan_amount);
    amount=loan_amount;
    printf("enter interest rate:");
    scanf("%f",&interest_rate);

    printf("enter monthly payment:");
    scanf("%f",&monthly_payment);

    monthly_interest_rate = (interest_rate/100.0) / 12;
    printf("enter monthly interest rate:%f\n",monthly_interest_rate);
 
    amount = (amount - monthly_payment)+(amount*monthly_interest_rate);
    printf("balance reamining after first payment:%.2f\n",amount);

    amount = (amount - monthly_payment)+(amount*monthly_interest_rate);
    printf("balance remaining after second paymen:%.2f\n:",amount);

    amount= (amount - monthly_payment)+(amount*monthly_interest_rate);
    printf("balance remaining after third payment:%.2f\n",amount);
    return 0;
}

