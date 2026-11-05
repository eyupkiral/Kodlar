#include <stdio.h>
int grade;
int attendance;
int diciplinary_record;
int monthly_family_income;
int tuition_fee = 30000;
int main(){
    printf("============ UNIVERSITY SCHOLARSHIP ELIGIBILITY SYSTEM ============\n");
    printf("Please enter your grade (0-100): ");
    scanf("%d", &grade);
    while (grade < 0 || grade > 100){
        printf("Invalid grade! Please enter a valid grade (0-100): ");
        scanf("%d", &grade);
    }
    printf("Please enter your attendance percentage (0-100): ");
    scanf("%d", &attendance);
    while (attendance < 0 || attendance > 100){
        printf("Invalid attendance percentage! Please enter a valid percentage (0-100): ");
        scanf("%d", &attendance);
    }
    printf("Do you have any disciplinary record? (1 for Yes, 0 for No): ");
    scanf("%d", &diciplinary_record);
    while (diciplinary_record != 0 && diciplinary_record != 1){
        printf("Invalid input! Please enter 1 for Yes or 0 for No: ");
        scanf("%d", &diciplinary_record);
    }
    printf("Please enter your monthly family income (in TL): ");
    scanf("%d", &monthly_family_income);
    while (monthly_family_income < 0){
        printf("Invalid income! Please enter a valid monthly family income (in TL): ");
        scanf("%d", &monthly_family_income);
    }
    if (grade >= 90 && attendance >= 90 && diciplinary_record == 0){
        printf("Congratulations! You are eligible for the university full scholarship.\n");
        printf("Tuition discount: %d TL.\n", tuition_fee);
        printf("remaining tuition fee to be paid: %d TL.\n", tuition_fee - tuition_fee);
        printf("Book Allowance: 0000 TL.\n");

    }
    else if(grade >= 80 && attendance >= 85 && diciplinary_record == 0){
        printf("You are eligible for the university half scholarship.\n");
        printf("Tuition discount: %d TL.\n", tuition_fee / 2);
        printf("remaining tuition fee to be paid: %d TL.\n", tuition_fee - (tuition_fee / 2));
        printf("Book Allowance: 1000 TL.\n");
    }
    else if(grade >= 70 && attendance >= 80 && diciplinary_record == 0 && monthly_family_income <= 20000){
        printf("You are eligible for the university quarter scholarship.\n");
        printf("Tuition discount: %d TL.\n", tuition_fee / 4);
        printf("remaining tuition fee to be paid: %d TL.\n", tuition_fee - (tuition_fee / 4));
        printf("Book Allowance: 1000 TL.\n");
    }
    else{
        printf("Sorry, you are not eligible for any university scholarship.\n");
        printf("Tuition discount: 0 TL.\n");
        printf("remaining tuition fee to be paid: %d TL.\n", tuition_fee);
        printf("Book Allowance: 0000 TL.\n");
    }
}