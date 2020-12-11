#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    for(int i = 0, temp = 1; i < n; i++) {
        for(int j = n - i; j > 0; j--)
            printf("%02d", temp++);
        printf("\n");
    }
    return 0;
}