#include <stdio.h>
int main()
{
    int n, temp, sum = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}