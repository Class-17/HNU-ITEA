#include <stdio.h>

int Count_Digit ( const int N, const int D )
{
    int count = 0, temp = N;
    if(temp < 0) temp *= -1;
    if(temp == 0 && D == 0) count = 1;
    while (temp > 0)
    {
        if(temp % 10 == D) count++;
        temp /= 10;
    }
    return count;
}

int main()
{
    int N, D;
	
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}