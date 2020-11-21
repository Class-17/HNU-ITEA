#include <stdio.h>

struct Pencil {
    int num, price;
}item[3];

int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i < 3; i++)
        scanf("%d %d", &item[i].num, &item[i].price);
    long long minimum = 100000000;
    for(int i = 0; i < 3; i++) {
        int needNum = num / item[i].num;
        if(num % item[i].num != 0) needNum++;
        if(needNum * item[i].price < minimum)
            minimum = needNum * item[i].price;
    }
    printf("%d\n", minimum);
    return 0;
}