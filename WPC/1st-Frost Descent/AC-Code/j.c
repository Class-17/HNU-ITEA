#include <stdio.h>
// define seat's height
#define SEAT 30 
// define the number of apples
#define N 10 

int main()
{
    int tree[N]; // array definition
    for(int i = 0; i < N; i++)
        scanf("%d", &tree[i]); // get apples' height
    int height, count = 0;  
    scanf("%d", &height);
    height += SEAT;    // the max height can reach
    for(int i = 0; i < N; i++) // determine can reach it or not
        if(tree[i] <= height) count++;
    printf("%d\n", count); // picked apples
    return 0; 
}