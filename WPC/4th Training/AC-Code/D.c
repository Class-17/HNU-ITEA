#include <stdio.h>
#define N 1000
int main()
{
    int n, ans[N], cnt = 0; 
    scanf("%d", &n);
    while(n != 1) {
        ans[cnt++] = n; // store temporary num
        if(n % 2 != 0) n = n * 3 + 1;
        else           n /= 2;
    }
    ans[cnt] = 1;  // end with 1
    for(int i = cnt; i >= 0; i--)
        printf("%d%c", ans[i], (i != 0 ? ' ' : '\n'));
    return 0;
}