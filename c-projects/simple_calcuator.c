#include<stdio.h>

void main(){
    char op;
    printf("Enter Operation  (+,-,*,/)");
    scanf("%s", &op);
    
    int first_number,second_number;
    printf("Enter First Number: ");
    scanf("%d", &first_number);
    printf("Enter Second Number: ");
    scanf("%d", &second_number);

    int out;

    if (op == '*'){
        out = first_number * second_number;
        printf("*");
    }
    else if (op == '/'){
        out = first_number / second_number;
        printf("/");
    }
    else if (op == '+'){
        out = first_number + second_number;
        printf("+");
    }
    else if (op == '-'){
        printf("-");
        out = first_number - second_number;
    }
    
    printf("\n%d %c %d = %d",first_number,op,second_number,out);
    // printf("%d %c %d = %d",first_number,op,second_number,out);
     
}

// void  main(){
//     int a =2,b=10;
//     int out ;
//     out = a+b;
//     printf("%d",a+b);
//     printf("%d",out);
// }