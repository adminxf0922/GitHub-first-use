#include <stdio.h>

int main()
{
    char str[32] = {'\0'};
    char res[32] = {'\0'}; // 存放去重后的结果
    int i, j, k = 0;      // k为结果数组下标

    printf("请输入字符串：");
    scanf("%s", str);

    // 遍历原字符串每一个字符
    for (i = 0; str[i] != '\0'; i++)
    {
        int exist = 0; // 标记字符是否已经存在于结果数组
        // 检查当前字符是否已经存入res
        for (j = 0; res[j] != '\0'; j++)
        {
            if (res[j] == str[i])
            {
                exist = 1;
                break;
            }
        }
        // 不存在则放入结果数组
        if (!exist)
        {
            res[k++] = str[i];
        }
    }

    printf("%s", res);
    return 0;
}