#include <stdio.h>

int Factorial( const int N )
{
    if(N < 0)  return 0;
    if(N == 0) return 1;
    if(N > 1)           return N * Factorial(N - 1);
    else if(N == 1)    return 1;
}

int main()
{
    int N, NF;
	
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}