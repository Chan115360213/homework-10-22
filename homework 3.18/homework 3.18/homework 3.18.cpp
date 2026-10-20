// homework 3.18.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    float salesindollars = 0;
    while (salesindollars != -1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &salesindollars);
        if (salesindollars == -1)
            break;
        printf("Salary is : $%.2f\n",200 + salesindollars * 0.09);
        printf("\n");
    }
    
}

