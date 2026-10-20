// homework 3.19.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    float loan = 0, interestrate, charge;
    int days;
    while (loan != -1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%f", &loan);
        if (loan == -1)
            break;
		printf("Enter interest rate: ");
		scanf_s("%f", &interestrate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);
		charge = loan * interestrate * days / 365;
		printf("The interest charge is $%.2f\n", charge);
        printf("\n");
    }
}

