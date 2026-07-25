#include <stdio.h>

int main()
{
    char c2;
    char c1 = 'A';
    printf("请输入一个大写的英文字母：");
    scanf("%c",&c2);
    for (int i = 0; i < c2+1 - 'A'; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        if (i == 0)
        {
            for (int u = 0; u < 2 - 1; u++)
            {
                printf("%c", c1);
            }
        }
        else 
        {
            for (int u = 0; u < i + 1; u++)
            {
                printf("%c", c1 + u);
            }
        }
        for(int t = 0; t< i; t++)
        {
            printf("%c",(c1 + i)-(t+1));
        }

        for (int k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }

        printf("\n");
    }
}