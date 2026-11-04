#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int HP = 100;
int MHP = 50;
int option;
int damage;
int damagetaken(int damage){
    damage = rand() % 40 + 1;
    HP -= damage;
    if (HP < 0) {
        HP = 0;
        printf("You have been defeated!\n");
    }
    printf("Character HP: %d\n", HP);
}
int main(){
    srand(time(NULL));
    printf("Character HP: %d\n", HP);
    printf("Monster HP: %d\n", MHP);
    printf("You have 2 options. 1-Attack 2-Heal\n");
    while (HP > 0 && MHP > 0){
        scanf("%d", &option);
        while (option != 1 && option != 2){
            printf("Invalid option. Please choose 1 or 2.\n");
            scanf("%d", &option);
        }
        if (option == 1){
        int damage = rand() % 20 + 1;
        MHP -= damage;
        printf("You attacked the monster and dealt %d damage!\n", damage);
        damagetaken(damage);
        if (MHP < 0) {
            MHP = 0;
            printf("The monster has been defeated!\n");
        }
        printf("Monster HP: %d\n", MHP);

        }
        else if (option == 2){
        int heal = 30;
        HP += heal;
        if (HP > 100) {
            printf("You healed yourself for %d HP!\n", heal - (HP % 100));
            HP = 100;
        }
        if (HP <= 100) {
            printf("You healed yourself for %d HP!\n", heal);
        }
        printf("Character HP: %d\n", HP);
        damagetaken(damage);
        }
        }
    
    

}
