// homework 4.16.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
    printf("(A)\n");
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(j <= i)
            {
                printf("%s", "*");
            }
			else
			{
				printf("%s", " ");
			}
        }
        printf("\n");
    }

    printf("\n(B)\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > 0; j--)
        {
            if (j > i)
            {
                printf("%s", "*");
            }
            else
            {
                printf("%s", " ");
            }
        }
        printf("\n");
    }

    printf("\n(C)\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < i)
            {
                printf("%s", " ");
            }
            else
            {
                printf("%s", "*");
            }
        }
        printf("\n");
    }

    printf("\n(D)\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j >= 0; j--)
        {
            if (j > i)
            {
                printf("%s", " ");
            }
            else
            {
                printf("%s", "*");
            }
        }
        printf("\n");
    }
}

