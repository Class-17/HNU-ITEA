#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if(B > 0)
        printf("%d/%d=%.2lf\n", A, B, (double)A / B);
    else if(B < 0)
        printf("%d/(%d)=%.2lf\n", A, B, (double)A / B);
    else 
        printf("%d/%d=Error\n", A, B);
    return 0;
}