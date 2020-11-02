#include<stdio.h>
#include<string.h>
int main()
{
    char num[10], cast[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    // 采用字符型数组读入数字，利于处理，使用cast储存数字对应的拼音
    scanf("%s", num);
    for(int i = 0; i < strlen(num) - 1; i++)
    {
        if(num[i] != '-') printf("%s ", cast[num[i] - '0']);
        else              printf("fu ");  // 读入数字为负数，第一个字符为'-'
    }
    printf("%s\n", cast[num[strlen(num) - 1] - '0']);  // 保留最后一个数字，保证输出格式
    return 0;
}