#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char theString[100];

    puts("Enter the string you want to reverse :");
    fgets(theString, 100, stdin);
    strrev(theString);
    printf("The reversed output is : %s",theString);
    return 0;
}
