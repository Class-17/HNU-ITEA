#include <stdio.h>
#include <math.h>
#define N 3
#define SWAP(a, b) {double temp = a; a = b; b = temp;}
struct item {
    int x, y;
}point[N];

int main()
{
    for(int i = 0; i < N; i++)
        scanf("%d %d", &point[i].x, &point[i].y);
    double a, b, c;
    a = pow((point[1].x - point[0].x), 2) + pow((point[1].y - point[0].y), 2);
    b = pow((point[2].x - point[1].x), 2) + pow((point[2].y - point[1].y), 2);
    c = pow((point[2].x - point[0].x), 2) + pow((point[2].y - point[0].y), 2); 
    if(a > b) SWAP(a, b)
    if(b > c) SWAP(b, c)
    if(a + b > c)
        printf("Acute %.2lf\n", pow(c, 0.5));
    else if(a + b == c)
        printf("Right %.2lf\n", pow(c, 0.5));
    else
        printf("Obtuse %.2lf\n", pow(c, 0.5));
    return 0;
}