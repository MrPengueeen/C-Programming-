#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int i;
    int n = 0;
    int input[n];
    char choice;
    int max=0, min;
    int limit;
    int random =0;
    srand(time(0));

    printf("Do you want to custom input the test cases or generate random test cases (c/r) ?\n");
    scanf(" %c", &choice);

    switch(choice)
    {
    case 'c' :
        printf("Enter the number of test cases you want to input...\n");
        scanf(" %d", &n);

        for(i=0; i<n; i++) {
         printf("Enter test case #%d :\n", i+1);
         scanf(" %d", &input[i]);

        }
        for(i=0; i<n; i++) {
            printf("Test case #%d is : %d\n", i+1, input[i]);
        }
        for(i=0; i<n; i++) {
            if(max<=input[i]){
                max = input[i];
            }
        }

        for(i=0; i<n; i++) {
            if(min>=input[i]){
                min = input[i];
            }
        }
        printf("The highest input is %d and the lowest input is %d\n", max, min);
        break;

    case 'r' :
        printf("Enter the number of random test cases you want to generate...\n");
        scanf(" %d", &n);
        printf("Enter the highest limit of the random test cases...\n");
        scanf(" %d", &limit);
        for(i=0; i<n; i++) {
            random = ( rand() % limit) + 1;
            input[i] = random;
        }
        for(i=0; i<n; i++) {
            printf("Test case #%d is : %d\n", i+1, input[i]);
        }
        for(i=0; i<n; i++) {
            if(max<=input[i]){
                max = input[i];
            }
        }

        for(i=0; i<n; i++) {
            if(min>=input[i]){
                min = input[i];
            }
        }
        printf("The highest input is %d and the lowest input is %d\n", max, min);
        break;

    default:
        printf("INVALID INPUT!");
    }

    return 0;
}
