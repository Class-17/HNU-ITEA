#include <stdio.h>
#define SWAP(a, b) {int temp = a; a = b; b = temp;}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) SWAP(a, b)
    if(b > c) SWAP(b, c)
    if(a + b <= c) {printf("Not triangle\n"); return 0;}
    if(a * a + b * b == c * c)
        printf("Right triangle\n");
    else if(a * a + b * b > c * c)
        printf("Acute triangle\n");
    else 
        printf("Obtuse triangle\n");    
    if(a == b || b == c || a == c)
        printf("Isosceles triangle\n");
    if(a == b && b == c)
        printf("Equilateral triangle\n");
    return 0;
}