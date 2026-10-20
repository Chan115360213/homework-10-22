// homework 3.20.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
	int hours = 0 ;
	float rate;
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hours > 40)
			printf("Salary is $%.2f\n", 40 * rate + (hours - 40) * rate * 1.5);
		else
			printf("Salary is $%.2f\n", hours * rate );
		printf("\n");
	}
	return 0;
}
