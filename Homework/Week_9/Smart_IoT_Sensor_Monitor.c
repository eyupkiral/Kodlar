#include <stdio.h>
float temperature;
int Valid_Temperature = 0;
int Total_Valid_Temperature = 0;
int Invalid_Temperature = 0;
int Critical_Temperature = 0;
int main(){
    do{
    printf("Please Enter The Temperature Value: ");
    scanf("%f", &temperature);
    if((temperature < -40 || temperature > 125) && temperature != -999){
        Invalid_Temperature++;
        printf("Invalid Temperature! Please Enter A Valid Temperature Value: ");
        scanf("%f", &temperature);
    }
    else if(temperature >= -40 && temperature <= 125){
        Valid_Temperature++;
        Total_Valid_Temperature += temperature;
        if(temperature >= -40 && temperature <= 40){
            printf("The Temperature Is Normal.\n");
        }
        else if(temperature > 40 && temperature <= 80){
            printf("The Temperature Is High.\n");
        }
        else if(temperature > 80 && temperature <= 125){
            printf("The Temperature Is Critical.\n");
            Critical_Temperature++;
        }
    }
    }while(temperature != -999);
    if(Valid_Temperature == 0){
        Valid_Temperature = 1;
        return 0;
    }
    printf("Total Valid Temperature Readings: %d\n", Valid_Temperature);
    printf("Average Valid Temperature Readings: %.2f\n", (float)Total_Valid_Temperature / (Valid_Temperature));
    printf("Total Invalid Temperature Readings: %d\n", Invalid_Temperature);
    printf("Total Critical Temperature Readings: %d\n", Critical_Temperature);
}