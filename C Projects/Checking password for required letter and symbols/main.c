#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
  char password[30];
  int   a =0, b = 0, c = 0;
  int upperCount = 0 , digitCount = 0 , dollarCount = 0;

  printf("Enter your password. (Must contain at least one uppercase letter, number and a '$' sign) : \n");
  scanf(" %s", password);

  for(a=0;a<=29;a++) {

    if( isupper(password[a])) {

        upperCount++ ;

    } else if( isdigit(password[a])) {

        digitCount++ ;

    } else if(password[a] == '$') {

        dollarCount++ ;

    }
  }

    (upperCount,digitCount,dollarCount!=0)? printf("You're good to go!") : printf("Invalid Password!!");
  return 0;
}
