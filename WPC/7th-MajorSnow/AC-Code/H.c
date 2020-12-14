#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n; scanf("%d", &n);
    bool s1 = false, s2 = false;
    if(n % 2 == 0) s1 = true;
    if(n > 4 && n <= 12) s2 = true;
    int a = 0, b = 0, c = 0, d = 0;
    if(s1 && s2) a = 1;
    if(s1 || s2) b = 1;
    if((s1 && !s2) || (!s1 && s2)) c = 1;
    if(!s1 && !s2) d = 1;
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}