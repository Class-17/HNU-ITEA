#include <stdio.h>
int main()
{
    int m, s, t;
    scanf("%d %d %d", &m, &t, &s);
    if(t == 0) m = 0;
    else 
        m -= s / t + (s % t == 0 ? 0 : 1);
    if(m < 0) m = 0;
    printf("%d\n", m);
    return 0;
}