#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double area = p * (p - a) * (p - b) * (p - c);
    area = pow(area, 0.5);
    printf("%.1lf\n", area);
    return 0;
}