#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
 int game(char player, char computer){
 // case 1
 //computer and player have chosen the same out of rock paper scissors
 if(player==computer){
    return -1;
 }
 // for the other cases conditional if else statements can be used
if(player=='s'&& computer=='p')
    return 0;
else if(player=='p' && computer == 's')
    return 1;
else if (player == 's' && computer == 's')
        return 0;
if (player== 'p' && computer == 's')
        return 0;
else if (player == 's' && computer == 'p')
        return 1;
}
//Now in order to make the computer have a random selection from among Rock paper Scissors we use rand and time functions in the main code
int main() {
int n,i,k;
int playerScore = 0, computerScore = 0, result;
// Ask the user how many rounds they want to play
    printf("Enter the number of rounds you want to play: ");
    scanf("%d", &k);
char player, computer;
//choose a random number everytime
getchar();
for(i = 0; i < k; i++){
srand(time(NULL));
// take the number 'n' such that it is less than a 100 for efficient randomness
n=rand()%100;
//Probability of the number being any from 0 to 99, roughly divided among all the three
if(n<33)
    computer='s';
else if (n > 33 && n < 66)
    computer = 'p';
else
    computer = 'z';

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    // input from the player
    scanf("%c", &player);
    getchar();
    // Function Call
result = game(player, computer);
//prediction of results
 if(result == -1) {
printf("Game Draw! Both chose: %c\n", player);}
else if(result == 1) {
printf("You won this round! You chose: %c, Computer chose: %c\n", player, computer);
playerScore++;
} else {
printf("You lost this round! You chose: %c, Computer chose: %c\n", player, computer);
computerScore++;
        }
    }
//final results,score and win prediction
printf("\n\nFinal Results after %d rounds:\n", k);
printf("Your Score: %d\n", playerScore);
printf("Computer's Score: %d\n", computerScore);

if(playerScore > computerScore) {
printf("Congratulations! You have defeated a computer!\n");
} else if(playerScore < computerScore) {
printf("Sorry! Seems AI will take over after all.\n");
} else {
    printf("It's a tie!\n");
    }

return 0;
}


