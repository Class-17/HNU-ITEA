#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x;
    scanf("%d", &x);
    bool typeA = false, typeB = false;
    if(x % 2 == 0)      typeA = true;
    if(x > 4 && x <= 12) typeB = true;
    printf("%d ", typeA && typeB);
    printf("%d ", typeA || typeB);
    printf("%d ", (typeA && !typeB) || (!typeA && typeB));
    printf("%d\n", !typeA && !typeB);
    return 0;
}