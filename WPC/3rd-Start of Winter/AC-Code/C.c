#include <stdio.h>
int main()
{
    double t;
    int n;
    scanf("%lf %d", &t, &n);
    printf("%.3lf\n%d\n", t / n, n * 2);
    return 0; 
}