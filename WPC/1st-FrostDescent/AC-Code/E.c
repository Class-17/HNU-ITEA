#include <stdio.h>
int main()
{
    int h, m, time;
    scanf("%d %d", &h, &m);
    // get the time in mimutes
    time = h * 60 + m;
    scanf("%d %d", &h, &m);
    // get the difference of two times
    time = h * 60 + m - time;
    h = time / 60;  // get hours
    m = time % 60;  // get minutes
    printf("%d %d\n", h, m);
    return 0;
}