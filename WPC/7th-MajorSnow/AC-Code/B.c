#include <stdio.h>
#define H 30
#define N 10
int main()
{
    int apple[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &apple[i]);
    int height, cnt = 0;
    scanf("%d", &height);
    for(int i = 0; i < N; i++)
        if(apple[i] <= height + H) cnt++;
    printf("%d\n", cnt);
    return 0;
}