#include<stdio.h>


void celsius_to_fahrenheit(float cel){
    float fah = ((9*cel)/5)+32;
    printf("celsius_to_fahrenheit %f",fah);
    // return faren;
    return;
}
void celsius_to_kelvin(float cel){
    float kel = cel + 273.15;
    printf("celsius_to_kelvin : %f",kel);
    return;
}
void fahrenheit_to_kelvin(float fah){
    float kel = (((fah-32)*5)/9)+273.15;
    printf("fahrenheit_to_kelvin %f",kel);
    return;
}
void fahrenheit_to_celsius(float fah){
    float cel = ((fah - 32)*5)/9;
    printf("fahrenheit_to_celsius %f",cel);
    return;
}
void kelvin_to_fahrenheit(float kel){
    float fah = (((kel - 32)*9)/5) + 273.15;
    printf("kelvin_to_fahrenheit %f",fah);
    return;
}
void kelvin_to_celsius(float kel){
    float cel = kel - 273.15;
    printf("kelvin to celsius : %f",cel);
    return;
}

void temp_converter(){
    printf("                    -----------------------------                \n");
    printf("                    |          welcome          |                \n");
    printf("                    |            to             |                \n");
    printf("                    |   temparature converter   |                \n");
    printf("                    -----------------------------                \n");
    printf("\n\n\n\n\n");
    printf("Select one of the following: \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Kelvin\n");
    printf("4. Fahrenheit to Celsius\n");
    printf("5. Kelvin to Fahrenheit\n");
    printf("6. Kelvin to Celsius\n");
    printf(": ");

    int cnv_op;
    scanf("%d", &cnv_op);
    
    printf("\n Enter Temprature: ");
    float given_temp;
    scanf("%f", &given_temp);


    if (1>cnv_op>6){
        printf("\n Please select a valid option next time.");
        return;
    }
    else if (cnv_op == 1){        
        celsius_to_fahrenheit(given_temp);
    }
    else if (cnv_op == 2){        
        celsius_to_kelvin(given_temp);
    }
    else if (cnv_op == 3){        
        fahrenheit_to_kelvin(given_temp);
    }
    else if (cnv_op == 4){        
        fahrenheit_to_celsius(given_temp);
    }
    else if (cnv_op == 5){        
        kelvin_to_fahrenheit(given_temp);
    }
    else if (cnv_op == 6){        
        kelvin_to_celsius(given_temp);
    }
    return;

// Celsius, Fahrenheit, and Kelvin.
    
}


void main(){

    int again;
    do
    {
        temp_converter();
        printf("\nPress 1 to try again");
        scanf("%d",&again);
    } while (again == 1);
    
}