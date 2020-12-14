#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int AtypeN = 0, BtypeN = 0;
    int AtypeS = 0, BtypeS = 0;
    for(int i = 1; i <= n; i++)
        if(i % k == 0) {
            AtypeN++; AtypeS += i;
        }   
        else {
            BtypeN++; BtypeS += i;
        }
    printf("%.1lf %.1lf\n", (double)AtypeS / AtypeN, (double)BtypeS / BtypeN);
    return 0;
}