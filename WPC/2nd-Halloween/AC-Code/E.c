#include<stdio.h>
int main()
{
    int time, rabbit = 0, turtle = 0, i = 0;
    scanf("%d", &time);
    while(i < time)
    {
        rabbit += 9;
        turtle += 3;
        i++;
        if(i % 10 == 0 && rabbit > turtle)
            for(int j = 0; j < 30 && i < time; j++, i++)
                turtle += 3;
    }
    if(rabbit > turtle) 
        printf("^_^ %d\n", rabbit);
    else if(rabbit < turtle) 
        printf("@_@ %d\n", turtle);
    else
        printf("-_- %d\n", rabbit);
    return 0;
}