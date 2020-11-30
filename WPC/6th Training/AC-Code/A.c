#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; i * i <= n; i++)
        if((n % i == 0) && prime(i) && prime(n / i)) {
            printf("%d\n", n / i);
            break;
        }
    return 0;
}