#include <stdio.h>
int age;
int Student;
int weekend;
int TicketPrice = 200;
int main(){
    printf("Enter your age: ");
    scanf("%d", &age);
    while (age < 0){
        printf("Invalid age! Please enter a valid age: ");
        scanf("%d", &age);
    }
    if (age < 12) {
        age = 1001;
    }
    else if (age >= 12 && age < 25) {
        age = 1002;
    }
    else if (age >= 65) {
        age = 1003;
    }
    switch (age) {
        case 1001:
            printf("You Will Benefit From 50%% Discount\n");
            TicketPrice /= 2;
            break;
        case 1002:
            printf("Are you a student? (1=Yes, 0=No)\n");
            scanf("%d", &Student);
            while (Student != 1 && Student != 0){
                printf("Invalid input! Please enter 1 for Yes or 0 for No: ");
                scanf("%d", &Student);
            }
            if (Student == 1) {
                printf("You Will Benefit From 25%% Discount\n");
                TicketPrice -= TicketPrice * 0.25;
            } 
            else {
                printf("You Will NOT Benefit From Any Discount.\n");
            }
            break;
        case 1003:
            printf("You Will Benefit From 30%% Discount\n");
            TicketPrice -= TicketPrice * 0.30;
            break;
        default:
            printf("You Will NOT Benefit From Any Discount.\n");
    }
    printf("Is it a weekend? (1=Yes, 0=No)\n");
    scanf("%d", &weekend);
    while (weekend != 1 && weekend != 0){
        printf("Invalid input! Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &weekend);
    }
    if (weekend == 1) {
        printf("Youll be charged with extra 20 TL.\n");
        TicketPrice += 20;
    }
    if (weekend == 0) {
        printf("You will Not be charged with extra.\n");
    }
    printf("Your Ticket Price is: %d TL\n", TicketPrice);
    return 0;
}