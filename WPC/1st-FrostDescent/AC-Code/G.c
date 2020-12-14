#include <stdio.h>
// using Macro to substitute SWAP block
#define SWAP(a, b) {int temp = a; a = b; b = temp;}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) SWAP(a, b) // swap a and b
    if(b > c) SWAP(b, c) // swap current b and c
    if(a > b) SWAP(a, b) // swap current a and b
    printf("%d %d %d\n", a, b, c);
    return 0;
}