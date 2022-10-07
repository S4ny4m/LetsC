#include <stdio.h>
#include <stdlib.h>
int repCheck[9] = {0};                                           // a var arry to check the move repetetion
char xo[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'}; // a var array to 'x' and '0';
int plrOrAi();                                                   // a function to see who is going to play;
void borders();                                                  // a function to print the initial skeleton of the game;
int player(int turn);                                            // a function to take input according to the player number;
void checkup(int turn, int choice, int against);                 // a function that dosent let the user to take a square again;
void printup();                                                  // a function that prints the updated choice ;
int checkwin();                                                  // a function that returns 1 if someone wins ;
int ai(int turn, int choice);                                    // a function to pick choices from ai;

int main()
{
    int against, turn, choice, win;
    against = plrOrAi();
    borders();
    for (turn = 1; turn <= 9 && win != 1; turn++)
    {

        if (against == 2) // for Plr VS Plr
        {
            printf("turn% d\n", turn);
            choice = player(turn);
            checkup(turn, choice, against);
            system("cls");
            printup();
            if (turn > 4)
                win = checkwin();
        }
        else if (against == 1) // against ai
        {
            if (turn % 2 == 1)
                choice = player(turn);
            else
            {
                // ai
                choice = ai(turn, choice);
            }
            checkup(turn, choice, against);
            // system("cls");
            printup();
            if (turn > 4)
                win = checkwin();
        }
    }
    return 0;
}

int plrOrAi()
{
    int against;
    printf("Choose 1 to play Human Vs AI.\n\tOR\n");
    printf("Choose 2 to play Human Vs Human.\n");
    scanf("%d", &against);
    // system("cls")
    if (against == 1)
        printf("\tHuman VS AI \n");
    if (against == 2)
        printf("\tHuman VS Human \n");
    return against;
}

void borders()
{
    printf("\n\n Tic Tac Toe\n\n");
    printf("  1 |  2 | 3  \n");
    printf("____|____|____\n");
    printf("  4 |  5 | 6  \n");
    printf("____|____|____\n");
    printf("  7 |  8 | 9  \n");
    printf("    |    |    \n");
    printf("Enter a choice from {1-9}.\n");
}

int player(int turn)
{
    int choice;
    if (turn % 2 == 1)
    {
        printf("Choose your choice 'Player 1': \n");
        scanf("%d", &choice);
    }
    else
    {
        printf("Choose your choice 'Player 2': \n");
        scanf("%d", &choice);
    }
    return choice;
}

void checkup(int turn, int choice, int against)
{
    int newchoice;
    repCheck[choice - 1]++;
    // now updating the value so that we can check the
    if (repCheck[choice - 1] > 1 && against == 2)
    {
        printf("Dekh kar chal na,%d mat le \" already taken \"", choice);
        repCheck[choice - 1]--;
        newchoice = player(turn);
        checkup(turn, newchoice, against);
    }
    else if (repCheck[choice - 1] > 1 && against == 1)
    {
        repCheck[choice - 1]--;
        newchoice = ai(turn, choice);
        checkup(turn, newchoice, against);
    }
    else
    {

        if ((turn % 2) == 0)
        {
            xo[choice - 1] = '0';
        }
        else
        {
            xo[choice - 1] = 'X';
        }
    }
}

void printup()
{
    printf("\t  %c |  %c | %c  \n", xo[0], xo[1], xo[2]);
    printf("\t____|____|____\n");
    printf("\t  %c |  %c | %c  \n", xo[3], xo[4], xo[5]);
    printf("\t____|____|____\n");
    printf("\t  %c |  %c | %c  \n", xo[6], xo[7], xo[8]);
    printf("\t    |    |    \n");
}

int checkwin()
{
    if ((xo[0] == xo[1]) && (xo[1] == xo[2]))
    {
        if (xo[0] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[3] == xo[4]) && (xo[4] == xo[5]))
    {
        if (xo[3] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[6] == xo[7]) && (xo[7] == xo[8]))
    {
        if (xo[6] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[0] == xo[3]) && (xo[3] == xo[6]))
    {
        if (xo[0] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[1] == xo[4]) && (xo[4] == xo[7]))
    {
        if (xo[1] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[2] == xo[5]) && (xo[5] == xo[8]))
    {
        if (xo[2] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[0] == xo[4]) && (xo[4] == xo[8]))
    {
        if (xo[0] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
    if ((xo[2] == xo[4]) && (xo[4] == xo[6]))
    {
        if (xo[2] == 'X')
            printf("\n'X' Won\n");
        else
            printf("\n'0' Won\n");
        return 1;
    }
}

int ai(int turn, int choice)
{
    if (turn < 4)
    {
        while (1)
        {
            choice = rand();
            if (choice <= 9 && choice >= 1)
                break;
        }
    }
    printf("AI choosed : %d \n", choice);
    return choice;
}