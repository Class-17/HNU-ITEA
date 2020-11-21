#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0) return false;
    return true;
}
 
int main()
{
    int n, temp;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &temp);
        if(IsPrime(temp)) {
            printf("%d", temp);
            break;
        }
    }
    while(n--) {
        scanf("%d", &temp);
        if(IsPrime(temp)) printf(" %d", temp);
    }
    return 0;
}