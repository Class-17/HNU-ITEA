#include <stdio.h>
int main()
{
    int n, temp, min = 1000;
    // get the number of input
    scanf("%d", &n);
    while(n--)
    {
        // get the coming number
        scanf("%d", &temp);
        // determine whether it is the minimum
        if(temp < min) min = temp;
    }
    printf("%d\n", min);
    return 0;
}