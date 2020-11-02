#include<stdio.h>
#include<string.h>
int main()
{
    char str[101], result[101];
    int num, i;
    gets(str);
    scanf("%d", &num);
    num %= strlen(str);         // 如果左移次数大于字符串长度，将其取余，不会影响结果
    for(int i = 0; i < strlen(str); i++)
    {
        int location = i - num;  // 得到左移后原字符的所在位置
        if(location < 0) location += strlen(str);  // 如果减去左移次数小于零，+字符串长度
        result[location] = str[i];  // 储存至新数组
    }
    for(int i = 0; i < strlen(result); i++)
        printf("%c", result[i]);
    return 0;
}