// homework 3.33.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 12 ; j ++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 11)
            {
                printf("+");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

