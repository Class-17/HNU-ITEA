#include <stdio.h>
#define N 100
int main()
{
    int n, record[N], ans[N] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &record[i]);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
            if(record[j] < record[i])
                ans[i]++;
        printf("%d", ans[i]);
        printf("%c", i == n - 1 ? '\n' : ' ');
    }
    return 0;
}