#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ogemiy;
int ogemix;
int botgemiy;
int botgemix;

int main() {
    srand(time(NULL));
    printf("Welcome to Battleship Game!\n");
    printf("You will place a ship on a single square. bot will also place a ship on a single square. The first to hit the other's ship wins!\n");
    printf("Enter the coordinates for your ship (x y) (1-5): ");
    scanf("%d %d", &ogemix, &ogemiy);
    while (ogemix < 1 || ogemix > 5 || ogemiy < 1 || ogemiy > 5) {
        printf("Invalid coordinates. Please enter values between 1 and 5.\n");
        printf("Enter the coordinates for your ship (x y) (1-5): ");
        scanf("%d %d", &ogemix, &ogemiy);
    }
    botgemix = rand() % 5 + 1;
    botgemiy = rand() % 5 + 1;
    printf("Bot has placed its ship. (%d, %d)\n", botgemix, botgemiy); // bu kısım test ve debug için bot gemisinin poziyonunu verir
    int guessx, guessy;
    int botguessx, botguessy;
    int health = 1;
    int bothealth = 1;
    while (health > 0 && bothealth > 0) {
    printf("Enter the coordinates for your guess (x y) (1-5): ");
    scanf("%d %d", &guessx, &guessy);
    while (guessx < 1 || guessx > 5 || guessy < 1 || guessy > 5) {
        printf("Invalid coordinates. Please enter values between 1 and 5.\n");
        printf("Enter the coordinates for your guess (x y) (1-5): ");
        scanf("%d %d", &guessx, &guessy);
    }
    if (guessx == botgemix && guessy == botgemiy) {
        printf("Congratulations! You hit the bot's ship!\n");
        bothealth = 0;
        break;
        } else {
        botguessx = rand() % 5 + 1;
        botguessy = rand() % 5 + 1;
        printf("You missed! Bot guessed (%d, %d) and ", botguessx, botguessy);
        if (botguessx == ogemix && botguessy == ogemiy) {
            printf("Bot has hit your ship! You lost!\n");
            health = 0;
            break;
        } else {
            printf("missed your ship! Round Continues.\n");
        }
    }
    }
}