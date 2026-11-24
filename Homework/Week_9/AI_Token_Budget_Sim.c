#include <stdio.h>
int Daily_Limit = 1000;
int Choice;
int Token_Usage;
int Accepted_Request = 0;
int main(){
    do{
    printf("Please choose an option:\n 1-Send AI Request\n 2-View Token Usage\n 3-Exit Program\n");
    scanf("%d", &Choice);
    switch (Choice){
        case 1:
        printf("Please Enter The Required Amount Of Tokens: ");
        scanf("%d", &Token_Usage);
        if(Token_Usage <= 0){
            printf("Rejected! Invalid Token Amount.");
        }
        if(Token_Usage > Daily_Limit){
            printf("Rejected! Limit Exceeded.");
        }
        if(Token_Usage <= Daily_Limit){
            Daily_Limit -= Token_Usage;
            Accepted_Request++;
            printf("Accepted! Remaining Token Amount: %d\n", Daily_Limit);
        }
        break;
        
        case 2:
        printf("Total Tokens Used: %d\n", 1000-Daily_Limit);
        printf("Total Accepted Request(s): %d\n", Accepted_Request);
        break;

        case 3:
        printf("Exiting The Program...");
        break;

        
        default:
        printf("Please Choose A Valid Option");
        break;
    }
    }while(Choice != 3);
}