#include<stdio.h>
#include <stdlib.h>
#include<time.h>


int main(){
    int a;
    srand(time(0));

    int again;
    do{
        int comp_num = rand();
        printf("%d \t",comp_num);
        int user_guess;
        printf("\nGuess A Number: ");
        scanf("%d",&user_guess);

        if (user_guess==comp_num){
            printf("\nYou have Guessed : Correct.");
        }
        else{
            printf("\nYou have Guessed : Wrong.");
        }

        printf("\nPress 1 to try again :");
        scanf("%d",&again);
    }while(again==1);
    
}