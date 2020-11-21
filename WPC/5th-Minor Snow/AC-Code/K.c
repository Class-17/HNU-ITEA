#include <stdio.h>
#define MAXN 100
int main()
{
    int digit[MAXN], i = 0;
    while(scanf("%d", &digit[i]) && digit[i++] != 0);
    i -= 2;
    while(i >= 0)
        printf("%d%c", digit[i--], i == 0 ? '\n' : ' ');
    return 0;
}