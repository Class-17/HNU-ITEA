#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0, temp = 1; i < n * n; temp++, i++) {
        printf("%02d", temp);  // print square
        if(temp % n == 0) printf("\n");
    }
    printf("\n");
    for(int i = 0, temp = 1; i < n; i++){
        for(int j = n - i - 1; j > 0; j--)
            printf("  "); // print space 
        for(int j = i + 1; j > 0; j--)
            printf("%02d", temp++); // print number
        printf("\n");   
    }    
}