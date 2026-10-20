// homework 3.17.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
	int accountNumber;
	float beginningBalance, totalCharges, totalCredits, creditLimit,newBalance;
	while (1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &accountNumber);
		if (accountNumber == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &beginningBalance);
		printf("Enter total charges:");
		scanf_s("%f", &totalCharges);
		printf("Enter total credits:");
		scanf_s("%f", &totalCredits);
		printf("Enter credit limit:");
		scanf_s("%f", &creditLimit);
		newBalance = beginningBalance + totalCharges - totalCredits;
		if (newBalance > creditLimit)
		{
			printf("Account:%d\n", accountNumber);
			printf("Credit limit:%.2f\n", creditLimit);
			printf("Balance:%.2f\n", newBalance);
			printf("Credit limit Exceeded\n.");
		}
		printf("\n");
	}
}

