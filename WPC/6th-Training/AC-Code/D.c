#include <stdio.h>
#include <string.h>

int Add(int A[], int B[], int len)
{
    for(int i = 0; i < len; i++) {
        A[i] += B[i];
        if(A[i] > 9) {
            A[i + 1] += A[i] / 10;
            A[i] = A[i] % 10;
        }
    }
    if(A[len] > 0) len++;
    return len;
}

int ReadNum(int num[])
{
    int len = 0;
    char temp[510]; scanf("%s", temp);
    for(int i = strlen(temp) - 1; i >= 0; i--)
        num[len++] = temp[i] - '0';
    return len;
}

int main()
{
    int A[510] = {0}, B[510] = {0}; 
    int Alen, Blen;
    Alen = ReadNum(A); Blen = ReadNum(B);
    int ansL = Alen > Blen ? Alen : Blen; 
    ansL =  Add(A, B, ansL);
    for(int i = ansL - 1; i >= 0; i--)
        printf("%d", A[i]);
    return 0;
}