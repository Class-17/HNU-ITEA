#include <stdio.h>
int main()
{
    int N;
    scanf("%d\n", &N);
    while(N--) {
        char sex; double hight;
        scanf("%c %lf\n", &sex, &hight);
        if(sex == 'M')
            printf("%.2lf\n", hight / 1.09);
        else 
            printf("%.2lf\n", hight * 1.09) ;
    }
    return 0;
}