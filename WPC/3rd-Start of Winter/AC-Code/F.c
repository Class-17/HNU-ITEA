#include <stdio.h>
int main()
{
    int k, n = 1; 
    double sum = 0.0;
    scanf("%d", &k);
    while(sum <= k){
        sum += 1.0 / n;
        n++;
    }
    printf("%d\n", n - 1);
    return 0;
}