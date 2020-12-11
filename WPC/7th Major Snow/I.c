#include <stdio.h>
#define MAXN 10000
#define SWAP(a, b) {int temp = a; a = b; b = temp;}

int BubbleSort(int num[], int n)
{
    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(num[j] > num [j + 1]) {
                SWAP(num[j], num[j + 1])
                cnt ++;
            }
    return cnt;
}

int main()
{
    int n, num[MAXN];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("%d\n", BubbleSort(num, n));
    return 0;
}