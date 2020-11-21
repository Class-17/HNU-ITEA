#include <stdio.h>
#define MAXN 10000
#define SWAP(a, b) {int temp = a; a = b; b = temp;}

int BubbleSort(int array[], int len)
{
    int step = 0;
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - i - 1; j++)
            if(array[j] > array[j + 1]) {
                SWAP(array[j], array[j + 1])
                step++;
            }         
    }
    return step;
}

int main()
{
    int n, array[MAXN];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("%d\n",BubbleSort(array, n));
    return 0;
}