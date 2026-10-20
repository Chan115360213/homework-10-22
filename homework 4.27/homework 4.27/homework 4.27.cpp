// homework 4.27.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    for (int i = 1;i < 500;i++)
    {
        for(int j = i;j < 500;j++)
        {
            for (int k = j;k < 500;k++)
            {
                if (i * i + j * j == k * k)
                {
                    printf("{%d %d %d}\n", i, j, k);
                }
            }
        }
    }
}

