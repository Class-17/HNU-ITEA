#include <stdio.h>
int main()
{
    int n, max = 0, min = 10, sum = 0;
    scanf("%d", &n);
    for(int i = 0, temp; i < n; i++)
    {
        scanf("%d", &temp);
        sum += temp;
        if(temp > max) max = temp;
        if(temp < min) min = temp;
    }
    sum -= max + min;
    n -= 2;
    printf("%.2lf\n", sum * 1.0 / n);
    return 0;
}