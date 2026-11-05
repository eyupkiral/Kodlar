#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
char command;

int main(){
    srand(time(NULL));
    int oyunalanix = rand() % 10 + 1;
    int oyunalaniy = rand() % 10 + 1;
    while (1){
        printf("Robot is at position (%d, %d).\n", oyunalanix, oyunalaniy);
        printf("Robot Has A space of mobility in a 10x10 grid.\n");
        printf("Enter a command (F, B, L, R): ");
        scanf(" %c", &command);
        command = toupper(command);
        if (command == 'F'){
            if (oyunalaniy == 10){
                printf("Robot cannot move forward, it is at the edge of the grid.\n");
                continue;
            }
            else if (oyunalaniy != 10){
                printf("Robot is moving forward.\n");
                oyunalaniy++;
            }
        }
        else if (command == 'B'){
            if (oyunalaniy == 1){
                printf("Robot cannot move backward, it is at the edge of the grid.\n");
                continue;
            }
            else if (oyunalaniy != 1){
                printf("Robot is moving backward.\n");
                oyunalaniy--;
            }
        }
        else if (command == 'L'){
            if (oyunalanix == 1){
                printf("Robot cannot go left, it is at the edge of the grid.\n");
                continue;
            }
            else if (oyunalanix != 1){
                printf("Robot is going left.\n");
                oyunalanix--;
            }
        
        }
        else if (command == 'R'){
            if (oyunalanix == 10){
                printf("Robot cannot go right, it is at the edge of the grid.\n");
                continue;
            }
            else if (oyunalanix != 10){
                printf("Robot is going right.\n");
                oyunalanix++;
            }
        }
        else{
        printf("Invalid command!\n");
        }

    }
}