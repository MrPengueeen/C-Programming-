#include<stdio.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    int i;
    int diceRoll = 0 , diceRoll_2 = 0;
    int sum =0 , sum2 = 0;
    char guess;

    printf("FIRST DICE ROLL...\n");

    for(i=0; i<3; i++) {
        diceRoll = 1 + (rand()%6);
        sum+=diceRoll;
        printf("%d\n", diceRoll);


    }
        printf("\nThe sum of the three dice rolls is %d.\n", sum);
        printf("\nWhat do you think the sum would be compared to the previous roll if we rolled the three dices again?\n");
        printf("\nHIGHER(h) / LOWER(l) / SAME(s) \n");
        printf("\nEnter your guess : \n");

        scanf(" %c", &guess);

        if(guess!='h' && guess!='l' && guess!='s') {
            printf("\nINVALID INPUT!\n");
        }else {

        printf("\nSECOND DICE ROLL...\n");

        for(i=0; i<3; i++) {
        diceRoll_2 = 1 + (rand()%6);
        sum2+=diceRoll_2;
        printf("%d\n", diceRoll_2);


    }

        switch(guess)
        {
        case 'h' :
            if(sum<sum2) {
                printf("\nThe sum this time is %d. You're correct asf!\n", sum2);
            }
            else if(sum>sum2) {
                printf("\nOops! The sum this time is %d.\nGood lord, YOU SUCK!\n", sum2);
            }else {
                printf("\nOops! The sum this time is %d.\nGood lord, YOU SUCK!\n", sum2);
            }

            break;

        case 'l':
            if(sum>sum2) {
                printf("\nThe sum this time is %d. You're correct asf!\n", sum2);

            }
            else if(sum<sum2) {
                printf("\nOops! The sum this time is %d.\nGood lord, YOU SUCK!\n", sum2);
            }else {
                printf("\nOops! The sum this time is %d.\nGood lord, YOU SUCK!\n", sum2);
            }


        case 's':
            if(sum==sum2) {
                printf("\nThe sum this time is %d. You're correct asf!\n", sum2);
            }
            else {
                printf("\nOops! The sum this time is %d.\nGood lord, YOU SUCK!\n", sum2);
            }

            break;

        default:
            printf("\nINVALID INPUT!\n");
        }
        }


   return 0;
}
