#include <stdio.h>
int main()
{
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);
    if(t == 0) m = 0;
    else m -= s * 1.0 / t;
    if(m < 0) m = 0;
    printf("%d\n", m);
    return 0;
}