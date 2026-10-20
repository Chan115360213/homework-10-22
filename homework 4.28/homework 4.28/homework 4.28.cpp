// homework 4.28.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
	int a = 0;
	while (a != -1)
	{
		printf("Enter employee code (1 to 4 , -1 to end): ");
		scanf_s("%d", &a);
		if(a == -1)
			break;
		switch (a)
		{

		case 1:
		{
			float salary;
			printf("Enter weekly salary:");
			scanf_s("%f", &salary);
			printf("managers salary is: %.2f\n", salary);
			printf("\n");
			break;
		}
		case 2:
		{
			int hours;
			float hourlyrate;
			printf("Enter hours:");
			scanf_s("%d", &hours);
			printf("Enter hourly rate:");
			scanf_s("%f", &hourlyrate);
			if (hours > 40)
				printf("hourly workers salary is: %.2f\n", 40 * hourlyrate + (hours - 40) * hourlyrate * 1.5);
			else
				printf("hourly workers salary is: %.2f\n", hours * hourlyrate);
			printf("\n");
			break;
		}
		case 3:
		{
			float weeklysales;
			printf("Enter weekly sales:");
			scanf_s("%f", &weeklysales);
			printf("commission workers salary is: %.2f\n", 250 + weeklysales * 0.057);
			printf("\n");
			break;
		}
		case 4:
		{
			int items;
			float money;
			printf("Enter items sold:");
			scanf_s("%d", &items);
			printf("Enter money per item:");
			scanf_s("%f", &money);
			printf("piece workers salary is: %.2f\n", items * money);
			printf("\n");
			break;
		}
		default:
			printf("Error: Invalid employee code.\n");
			printf("\n");
			break;
		}
	}
	

}

