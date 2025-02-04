#include<stdio.h>
#include<string.h>

void main(){
    int again;
    do{
        char user_str[100];
        printf("\nEnter the String : ");
        scanf("%s",&user_str);

        int palindrome = 1;
        for (int i =0; i<=strlen(user_str)/2; i++){
            if (user_str[i] != user_str[strlen(user_str)-i-1]){
                palindrome = 0;
            }
        }
        if (palindrome){
            printf("\nString is Palindrome.");
        }else{
            printf("\nString is not Palindrome.");
        }
    printf("\nPress 1 to try again :");
    scanf("%d",&again);
    }while(again==1);
}