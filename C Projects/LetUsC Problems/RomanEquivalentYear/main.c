#include <stdio.h>
#include <stdlib.h>


int fibo(int x)
{
    int f;

    if(x==0) {
        f=0;
    }
    else if(x==1) {
        f=1;
    }
    else {
        f = (fibo(x-1) + fibo(x-2));
        printf("%d\n", f);
    }

}
int main()
{
    int n = 10, fib;
    fibo(n);





}

