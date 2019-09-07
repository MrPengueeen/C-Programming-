/*

* Program to find the sum of all the odd or even Fibonacci numbers.
* There'll a be a limit to the highest Fibonacci number we bring into calculation.

*/


#include <stdio.h>
#include <stdlib.h>

int fibo( int x )
{
    int f;
    if(x<=2) {
        return 1;
    }
    else {
        f = fibo(x-1) + fibo(x-2);
        return f;
    }
}


int main()
{
    int i = 1;
    unsigned long sum = 0;
    unsigned long fib;

    while(fib <= 4000000) {

        fib = fibo(i);

        if(fib % 2 == 0) {
            sum += fibo(i);
        }
        i++;
    }
    printf("%d", sum);

    return 0;
}
