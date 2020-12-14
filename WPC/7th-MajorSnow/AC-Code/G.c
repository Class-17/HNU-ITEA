#include <stdio.h>
#define MAXN 10000
int main()
{
    int n, num[MAXN], i = 0;
    scanf("%d", &n);
    while(n != 1) {
        num[i++] = n;
        if(n % 2 == 0) n /= 2;
        else           n = n * 3 + 1;
    }
    num[i] = 1;
    while (i >= 0)
        printf("%d%c", num[i--], (i < 0 ? '\n' : ' '));
    return 0;
}