#include<stdio.h>
int main()
{
    char str[500001], temp[500001];
    int i = 0, flag = 0;
    scanf("%c", &str[i++]);
    while(str[i - 1] != '\n')  // 读入整个字符串
        scanf("%c", &str[i++]);
    for(i -= 2; i >= 0; i--)     // 注意要 -2，避免检测末尾的 '\n'
    {
        if(str[i] != ' ')       // 读入字符不为空格，开始操作
        {
            int j = 0;
            if(flag == 1) printf(" ");      // 控制输出格式
            while(str[i] != ' ' && i >= 0)     // 开始将当前单词存入临时字符数组
                temp[j++] = str[i--];
            j--;i++;        // 抵消上式做出的多余的j++，i--操作
            while(j >= 0)   // 将 temp字符数组倒序输出
                printf("%c", temp[j--]);
            flag = 1;   // 控制输出格式
        }        
    } 
    return 0;
}