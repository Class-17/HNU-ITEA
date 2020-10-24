#include <stdio.h>
// using Macro to substitute constant f1 and f2
#define F1 150 * 0.4463
#define F2 250 * 0.4663

int main()
{
    double fee;
    int cash;
    scanf("%d", &cash);
    if(cash < 150)      
        fee = cash * 0.4463;
    else if(cash < 400) // calculate separately
        fee = F1 + (cash - 150) * 0.4663;
    else                // calculate separately
        fee = F1 + F2 + (cash - 400) * 0.5663;
    printf("%.1lf\n", fee);
    return 0;
}