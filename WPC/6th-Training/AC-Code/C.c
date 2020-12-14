#include <stdio.h>
#include <stdbool.h>
#define MAXN 9

struct Go {
    int r, c;
}  Move[4] = {0, 1, 1, 0, 0, -1, -1, 0};

int Pos[MAXN][MAXN] = {0};
int NextPos(int r, int c, int n, int i)
{
    int NextR = r + Move[i].r, NextC = c + Move[i].c;
    if(NextR < n && NextR >= 0 && NextC < n && NextC >= 0)
        if(Pos[NextR][NextC] == 0) return true;
    return false;
}

int main()
{
    int n; scanf("%d", &n);
    int r = 0, c = 0, sum = 0, next = 0;
    while(sum < n * n) {
        Pos[r][c] = ++sum;
        if(sum == n * n) break;
        for(int i = 0; i < 4; i++) {
            next = (next + i) % 4;
            if(NextPos(r, c, n, next)) break;
        }
        r += Move[next].r; c += Move[next].c;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%3d", Pos[i][j]);
        printf("\n");
    }  
    return 0;
}