#include <stdio.h>
int main()
{
    int K, sum = 0;
    scanf("%d", &K);
    for(int i = 0, temp = 1; i < K; temp++)
        for(int j = 0; j < temp && i < K; j++, i++)
            sum += temp;
    printf("%d\n",sum);
    return 0;
}