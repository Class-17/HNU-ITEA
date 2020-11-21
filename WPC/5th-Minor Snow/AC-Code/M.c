#include <stdio.h>
int main()
{

    int day = 1, MaxTime = 0;
    for(int i = 1; i <= 7; i++) {
        int general, extra;
        scanf("%d %d", &general, &extra);
        if(general + extra > MaxTime) {
            MaxTime = general + extra;
            day = i;
        }
    }
    printf("%d\n", day);
    return 0;
}