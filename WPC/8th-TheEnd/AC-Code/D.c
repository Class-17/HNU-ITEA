#include <stdio.h>
int main()
{
    char c; int cnt = 0;
    while (scanf("%c", &c) != EOF && c != '\n') {
            if('a' <= c && c <= 'o') cnt += (c - 'a') % 3 + 1; 
            else if('p' <= c && c <= 's') cnt += c - 'p' + 1;
            else if('t' <= c && c <= 'v') cnt += c - 't' + 1;
            else if('w' <= c && c <= 'z') cnt += c - 'w' + 1;
            else if(c == ' ')             cnt += 1;
    }
    printf("%d\n", cnt);    
    return 0;
}