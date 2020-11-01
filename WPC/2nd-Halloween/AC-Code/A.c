#include<stdio.h>
int main()
{
    int num, temp = 0;
    scanf("%d", &num);
    while(num != 0)
    {
        temp = temp * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", temp);
    return 0;
}