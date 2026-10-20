// homework 4.31.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    int a = 4,b=1;
    for (int i = 0; i < 10; i+= 2)
    {
        printf("%*s", a, "");
        for (int j = 0; j < 10; j++)
        {
            if (j <= i)
            {
                
                printf("%s", "*");
            }
            else
            {
                printf("%s", " ");
            }
        }
        printf("\n");
        a--;
    }
    for (int i = 7; i > 0;i -= 2)
    {
        printf("%*s", b, "");
        for(int j = 0; j < i; j++)
        {
            if (j <= i)
            {

                printf("%s", "*");
            }
            else
            {
                printf("%s", " ");
            }
        }
        printf("\n");
        b++;
    }
    return 0;
}
