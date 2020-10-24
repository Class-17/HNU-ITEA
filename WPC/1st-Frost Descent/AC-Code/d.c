#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // convert to an int number
    a = (a * 10 + b) / 19;
    printf("%d\n", a);
    return 0;
}