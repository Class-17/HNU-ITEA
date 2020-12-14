#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    scanf("%d %d", &a, &n);
    for(int i = 0, temp = a; i < n; i++) {
        sum += temp;
        temp = temp * 10 + a;
    }
    printf("s = %d\n", sum);
    return 0;
}