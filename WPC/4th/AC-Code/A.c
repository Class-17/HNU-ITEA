#include <stdio.h>
int main()
{
    int a, day = 1;
    scanf("%d", &a);
    while(a != 1) {
        a /= 2; day++;
    }
    printf("%d\n", day);
    return 0;
}