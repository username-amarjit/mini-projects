#include<stdio.h>

int main(){
    printf("Hello world \n");
    
    char str[] = "Hello world";
    printf("%s \n",str);
    char name[50];
    printf("Enter your Name - ");
    scanf("%s", &name);
    printf("Hello %s.",name);
    
}