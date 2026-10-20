// homework 4.15.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
	float value[5] = { 0 }, a[] = {0.1, 0.105, 0.11, 0.115, 0.12};
	for (int i = 0; i < 5; i++)
	{
		value[i] = 5000 * (pow(1 + a[i], 15));
		printf("%.3f   %.3f\n", a[i], value[i]);
	}

}
