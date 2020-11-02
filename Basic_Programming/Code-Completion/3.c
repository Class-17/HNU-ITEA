#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N )
{
    if(N > 0) return List[N] + Sum(List, N - 1);    // 采用递归求和
    else      return List[0];
}

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}