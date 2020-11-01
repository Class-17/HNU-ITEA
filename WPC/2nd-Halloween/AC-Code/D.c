#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp, front = -1, sub = 1, max = 0;
    while(n--)
    {
        scanf("%d", &temp);
        if(temp == front + 1) sub++;
        else 
        {
            if(sub > max) max = sub;
            sub = 1;
        }
        front = temp;
    }
    printf("%d\n", max);
    return 0;
}