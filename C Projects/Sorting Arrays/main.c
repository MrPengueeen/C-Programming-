#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n = 0;
    int arrayInput[n];
    int temp;
    int sorted;

    printf("How many numbers do you want in the Array?\n");
    scanf(" %d", &n);
    printf("Enter the numbers to put in the arrayInput...\n");

    for(i=0; i<n; i++) {
        printf("Enter number #%d...\n", i+1);
        scanf(" %d", &arrayInput[i]);
    }

    for(i=0; i<n; i++) {
        printf("Input #%d is : %d\n", i+1, arrayInput[i]);
    }

    printf("\tNow, the sorted list... \t \n");

    while(1) {

        sorted = 0;

        for(i=0; i<n-1; i++) {
            if(arrayInput[i]>arrayInput[i+1]) {
                temp = arrayInput[i+1];
                arrayInput[i+1] = arrayInput[i];
                arrayInput[i] = temp;
                sorted = 1;
            }
        }

        if(sorted == 0) {
            break;
        }
    }

    for(i=0; i<n; i++) {
        printf("%d\n", arrayInput[i]);
    }
    return 0;
}
