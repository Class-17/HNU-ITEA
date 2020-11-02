#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N )
{
    int h = 1;      // 一般排序方法最后一个测试点会超时，在此使用Shellsort（希尔排序）
    while(h < N / 3) h = h * 3 + 1;
    while(h >= 1)
    {
        for(int i = h; i < N; i++)
            for(int j = i; j >= h && A[j] > A[j - h]; j -= h)
                {ElementType t = A[j]; A[j] = A[j - h]; A[j - h] = t;}
        h /= 3;
    }
    return A[(N + 1) / 2 - 1];  // 注意 -1
}

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}