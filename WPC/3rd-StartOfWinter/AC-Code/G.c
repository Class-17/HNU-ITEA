#include <stdio.h>
int main()
{
    int n, max = 0, min = 1000;
    scanf("%d", &n);
    while(n--)
    {
        int temp;
        scanf("%d", &temp);
        if(temp > max) max = temp;
        if(temp < min) min = temp;
    }
    printf("%d\n", max - min);
    return 0;
}