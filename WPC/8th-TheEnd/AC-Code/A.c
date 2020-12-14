#include <stdio.h>

int print(int n, char c)
{
    int level = 2, cnt = 1;
    while (cnt + (level * 2 - 1) * 2 <= n) {
        cnt += (level * 2 - 1) * 2;
        level++;
    }
    for(int i = level - 1; i > 0; i--) {
        for(int j = level - 1 - i; j > 0; j--)
            printf(" ");
        for(int j = i * 2 - 1; j > 0; j--)
            printf("%c", c);
        printf("\n");
    }
    for(int i = 2; i < level; i++) {
        for(int j = level - i - 1; j > 0; j--)
            printf(" ");
        for(int j = i * 2 - 1; j > 0; j--)
            printf("%c", c);
        printf("\n");
    }
    return n - cnt;
}

int main()
{
    int num; char c;
    scanf("%d %c", &num, &c);
    int left = print(num, c);
    printf("%d\n", left);
    return 0;
}