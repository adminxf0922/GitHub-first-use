#include<stdio.h>

int main()
{
    char ch[100];
    int count = 0;
    int count1=0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    printf("输入字符串（输入-1退出输入）：");
    for(int i =0; i<20; i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i] == '\n')
        {
            break;
        }
    }
    for(int i =0; i<20;i++)
    {
        if(ch[i] == ' ')
    {
        count1++;
    }else if(ch[i] >='A' && ch[i]<= 'Z')
    {
        count2++;
    }else if(ch[i] >='a' && ch[i] <= 'z')
    {
        count3++;

    }else{
        count++;
    }
    }
    
    printf("空格有：%d",count1);
    printf("大写字母有：%d",count2);
    printf("小写字母有：%d",count3);
    printf("其他字符有：%d",count);


    return 0;
}