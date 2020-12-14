#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    // ASCII code 'a' - 'A' = 32
    printf("%c\n", c - 32);
    return 0;
}