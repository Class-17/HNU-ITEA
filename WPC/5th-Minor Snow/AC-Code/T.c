#include <stdio.h>
int main()
{
    int num, location = 0, flag = 1;
    while(scanf("%d", &num) != EOF && ++location)
        if(num == 250 && flag) {
            printf("%d\n", location);
            flag = 0;
        }
    return 0;
}