#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Account {
    char name[50];
    float balance;
};

void main_screen();

struct Account create_new_account(){
    int balance;
    char name[50];
    printf("\nEnter Customer Name : ");
    scanf("%s",&name);
    printf("\nEnter Balance : ");
    scanf("%f",&balance);
    

    struct Account a1;
    strcpy(a1.name,name);
    a1.balance = balance;
    
    printf("\nNew Account created Successfully. Name: %s, Amount: %f \n",a1.name,a1.balance);

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();

};

void check_balance(struct Account acc){
    
    printf("\nYour Bank balance is %f",acc.balance);

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();

};

void deposit(struct Account acc){

    float amount;
    printf("\nEnter Amount You want to deposit.");
    scanf("%f",&amount);
    acc.balance += amount;

    printf("\n%f deposited Sucessfully.",amount);

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();
};

void withdraw(struct Account acc){

    float amount;
    printf("\nEnter Amount You want to withdraw.");
    scanf("%f",&amount);
    acc.balance -= amount;

    printf("\n%f withdrawn Sucessfully.",amount);

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();
};

void transfer(){

    printf("\nThis Feature is not yet available");

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();
    
};

void delete_an_account(){

    printf("\nThis Feature is not yet available");

    int enter;
    printf("\nPress Enter to Continue");
    scanf("%d",&enter);
    main_screen();

};

struct Account myacc;

void main_screen(){
    printf("            ========================================            \n");
    printf("            ||              WELCOME               ||            \n");
    printf("            ||               TO A                 ||            \n");
    printf("            ||              SIMPLE                ||            \n");
    printf("            ||            BANK SYSTEM             ||            \n");
    printf("            ========================================            \n");
    printf("\n\n\n\n");
    printf("Which service would you like to use: \n");
    printf("1. Create New Account.\n");
    printf("2. Check Balance.\n");
    printf("3. Deposit.\n");
    printf("4. Withdraw.\n");
    printf("5. Transfer.\n");
    printf("6. Delete an Account.\n");
    printf("7. Exit.\n");
    int service;
    scanf("%d",&service);
    
    
    if (service==1){
        myacc = create_new_account();
    }
    else if (service==2){
        check_balance(myacc);
    }
    else if (service==3){
        deposit(myacc);
    }
    else if (service==4){
        withdraw(myacc);
    }
    else if (service==5){
        transfer();
    }
    else if (service==6){
        delete_an_account();
    }
    else if (service==7){
        return;
    }
    else{
        main_screen();
    }


}

int main() {
    // int again;
    // do{
        main_screen();
        // printf("\nPress 1 to try again : ");
        // scanf("%d",&again);
    // } while (again == 1);
 
}
