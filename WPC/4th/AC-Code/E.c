#include <stdio.h>
int main()
{
    int start, end, num[10] = {0};
    scanf("%d %d", &start, &end);
    for(int i = start; i <= end; i++) {
        int temp = i;
        while(temp != 0) {  // get every digit
            num[temp % 10]++; // store into num
            temp /= 10;
        }
    }
    for(int i = 0; i < 10; i++) 
        printf("%d%c", num[i], (i != 9 ? ' ' : '\n'));
    return 0;
}