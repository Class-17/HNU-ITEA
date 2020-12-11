#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2 ;i * i <= n; i++)
        if(n % i == 0) return false;
    return true;    
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 0, j = 2; i < n; j++)
        if(IsPrime(j)) {
            sum += j;
            i++;
        }
    printf("%d\n", sum);
    return 0;
}