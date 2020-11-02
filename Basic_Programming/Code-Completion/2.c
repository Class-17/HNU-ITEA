#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x )
{
    double sum = a[0];
    for(int i = 1; i <= n; i++)
    {
        a[i] *= x;      // 从 1次幂开始， 依次求得各个项的结果
        sum += a[i];
        x *= x;         // 求得下一项数的变量值
    }
    return sum;
}

int main()
{
    int n, i;
    double a[MAXN], x;
    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}