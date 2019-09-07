#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned long long n = 600851475143;
    while(n%2==0) {
        printf("%d\n", 2);
        n /= 2;
    }

    for(int i=3; i<=sqrt(n); i+=2) {
        while(n%i == 0) {
            printf("%d\n", i);
            n/=i;
        }
    }

    if(n>2) {
        printf("%d\n", n);
    }

    return 0;
}
