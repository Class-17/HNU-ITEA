#include <stdio.h>
int main()
{
    int temp, sum = 0, count = 0;
    do {
        scanf("%d", &temp);
        if(temp < 0)  break;
        sum += temp; count++;
    } while (temp >= 0);
    if(count == 0) 
        printf("None\n");
    else 
        printf("%.2lf\n", (double)sum / count);
    return 0;
}