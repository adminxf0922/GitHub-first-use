#include <stdio.h>

int main()
{
    int a[10];
    int max, min, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("开始排序");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
    min = a[0];
    max = a[9];
    sum = min + max;
    printf("max = %d , min = %d \nsum = %d",max,min,sum);
}