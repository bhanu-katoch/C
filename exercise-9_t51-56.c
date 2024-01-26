#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    int a, j, uc = 0, cc = 0;
    char user[20];
    printf("~~~~enter 0 for rock, 1 for paper and 2 for scissor~~~\n ");
    printf("enter user name: ");
    scanf("%s", user);

    int dict[] = {'r', 'p', 's'};

    for (int i = 0; i < 3; i++)
    {
        j = generateRandomNumber(2);
        printf("\n\nYour turn\n");
        printf("enter 0 for rock, 1 for paper and 2 for scissor : ");
        scanf("%d", &a);
        printf("%s has chose: %c\n", user, dict[a]);
        printf("\ncomputer's turn\n");
        printf("computer has chose : %c\n", dict[j]);
        if ((a == 0 && j == 0) || (a == 1 && j == 1) || (a == 2 && j == 2))
        {
            uc += 0;
            cc += 0;
            printf("\noops clash\n");
        }
        else if ((a == 0 && j == 1) || (a == 2 && j == 0) || (a == 1 && j == 2))
        {
            uc += 0;
            cc += 1;
            printf("\ncomputer got it !\n");
        }
        else if ((a == 1 && j == 0) || (a == 0 && j == 2) || (a == 2 && j == 1))
        {
            uc += 1;
            cc += 0;
            printf("\nYou got it!\n");
        }
        else
        {
            printf("\n\n!!!!enter value between 0 and 2\n\n");
            break;
        }
    }
    printf("\n\n%s score is :%d\n", user, uc);
    printf("Computer score is :%d\n\n", cc);
    if (uc == cc)
    {
        printf("\ndraw!!\n\n");
    }
    else if (uc > cc)
    {
        printf("\nWinner is %s !\n\n", user);
    }

    else
    {
        printf("\nWinner is Computer !\n\n");
    }

    return 0;
}