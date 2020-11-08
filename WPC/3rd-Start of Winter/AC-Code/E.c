#include <stdio.h>
int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    n -= 7 - x + 1;
    int sum = 0;
    if(x < 6) sum += 5 - x + 1;
    if(n % 7 < 6) sum += n % 7;
    else          sum += 5; 
    sum += (n / 7) * 5;
    sum *= 250;
    printf("%d\n", sum);
    return 0;
}