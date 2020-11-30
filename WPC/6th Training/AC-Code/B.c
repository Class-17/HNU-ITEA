#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0, flag = 0, temp = 0;
    while (scanf("%d", &temp) != EOF) {
        while (temp--) {
            printf("%d", flag);
            if(++i % n == 0) printf("\n");
        }
        if(flag) flag = 0;
        else     flag = 1;
    }
    return 0;   
}