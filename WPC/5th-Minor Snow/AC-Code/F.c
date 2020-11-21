#include <stdio.h>
#include <math.h>

struct Point {
    double x, y;
}A, B, C;

int main()
{
    scanf("%lf %lf", &A.x, &A.y);
    scanf("%lf %lf", &B.x, &B.y);
    scanf("%lf %lf", &C.x, &C.y);
    double length = 0;
    length += pow(pow(B.x - A.x, 2) + pow(B.y - A.y, 2), 0.5);
    length += pow(pow(C.x - B.x, 2) + pow(C.y - B.y, 2), 0.5);
    length += pow(pow(C.x - A.x, 2) + pow(C.y - A.y, 2), 0.5);
    printf("%.2lf\n", length);
    return 0;
}