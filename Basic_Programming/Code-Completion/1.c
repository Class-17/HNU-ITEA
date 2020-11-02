#include <stdio.h>

void PrintN ( int N )
{
    if(N > 1)   PrintN(N - 1);      // 递归打印 N
    printf("%d\n", N);
}

int main ()
{
    int N;
    scanf("%d", &N);
    PrintN(N);
    return 0;
}