#include <stdio.h>
#define MAXN 100
int main()
{
    int fish[MAXN], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &fish[i]);
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++)
            if(fish[j] < fish[i]) cnt++;
        printf("%d%c", cnt, (i != n - 1 ? ' ' : '\n'));
    }
    return 0;
}