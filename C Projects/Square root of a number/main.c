#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float n;
    float x = 0.00;
    float count = 0;
    printf("Enter the number that you wish to calculate the square root of...\n");
    scanf(" %f", &n);

    while(1) {
        count = x*x;
        count+=0.1;

        if(count>=n) {
            break;
        }
    }
    printf("%.3f", count);

    return 0;
}








    /*float n;
    double x;
    printf("Enter the number that you wish to calculate the square root of...\n");
    scanf(" %f", &n);

    x = exp((log(n)/2)) ;
    printf("The square root of %.2f is : %.3f \n", n, x);

    return 0; */

