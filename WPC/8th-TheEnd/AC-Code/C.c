#include <stdio.h>
int main()
{
    int A, Da, B, Db, Pa = 0, Pb = 0;
    scanf("%d %d %d %d", &A, &Da, &B, &Db);
    while (A) {
        if(A % 10 == Da)
            Pa = Pa * 10 + Da;
        A /= 10;
    } 
    while (B) {
        if(B % 10 == Db)
            Pb = Pb * 10 + Db;
        B /= 10;
    }
    printf("%d\n", Pa + Pb);
    return 0;
}