#include <stdio.h>
// define n as the maximum number of the prime
#define N 50
int main()
{
    int n, num[N];
    // input the number of prime to sum up
    scanf("%d", &n);
    int temp = 2, flag = 1, sum = 0;
    while(n > 0)
    {
        flag = 1; // determine if temp is prime
        for(int i = 2; i < temp; i++)
            if(temp % i == 0) {flag = 0; break;}
        // add the temp, remaining primes -1
        if(flag == 1) {sum += temp; n--;} 
        temp++; // test next number 
    }
    printf("%d\n", sum);
    return 0;
}