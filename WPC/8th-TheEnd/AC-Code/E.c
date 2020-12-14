#include <stdio.h>
#define MAXN 100
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int left = n, circle[MAXN] = {0};
    for(int i = 0, t = 1; left > 0; i++) {
        if(i == n) i = 0;
        if(circle[i] == 0) {
            if(t == m) {
                circle[i] = 1; left--; t = 1;
                printf("%d%c", i + 1, (left > 0 ? ' ' : '\n'));
            }
            else t++;
        }
    }
    return 0;
}