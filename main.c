/*LAB 2 Q3 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 26th September 2014

Purpose: to play 'high or low' with the computer, the answer should be hidden and feedback on guess should be goven- guess higher, guess lower, guess is correct.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num,guess;
  srand(time( NULL ));
  num = rand()%100+1;


   while(guess!= num)
    {
        printf("Enter guess:\n");
        scanf("%d",&guess);


        if(guess > num){
        printf(" Guess lower \n");
        }

        if(guess < num){
        printf(" Guess higher\n");
        }

        if(guess == num){
        printf("Guess is correct!!!!!!\n");

        }
    }










    return 0;
}
