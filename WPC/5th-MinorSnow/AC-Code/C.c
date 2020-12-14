#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(5 * n < 3 * n + 11) printf("Local\n");
    else                   printf("Luogu\n");
    return 0;
}