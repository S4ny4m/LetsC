#include <stdio.h>
#include <stdlib.h>
void prnt();
int chance();
int win();
char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9'; // used to represent the 'x' && 'O'.
int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0, g1 = 0, h1 = 0, i1 = 0;           // used to check count of input.
void prnt(int plr, int choice)
{
    if ((plr == 0) && (choice == 0)) // will run only when called by giving (0,0)as input.
    {
        printf("\n\n Tic Tac Toe\n\n");
        printf("  %c |  %c | %c  \n", a, b, c);
        printf("____|____|____\n");
        printf("  %c |  %c | %c  \n", d, e, f);
        printf("____|____|____\n");
        printf("  %c |  %c | %c  \n", g, h, i);
        printf("    |    |    \n");
        printf("Enter a choice from {1-9}.\n");
    }
    else
    {
        switch (choice) // increasing the count per square.
        {
        case 1:
            a1++;
            break;
        case 2:
            b1++;
            break;
        case 3:
            c1++;
            break;
        case 4:
            d1++;
            break;
        case 5:
            e1++;
            break;
        case 6:
            f1++;
            break;
        case 7:
            g1++;
            break;
        case 8:
            h1++;
            break;
        case 9:
            i1++;
            break;
        default:
            printf("Enter a valid position.\n");
            printf("Enter a number as per the above convenction.\n");
            choice = chance(plr);
            prnt(plr, choice); // recalling the fun afer taking the input again.
            break;
        }

        if ((a1 > 1) || (b1 > 1) || (c1 > 1) || (d1 > 1) || (e1 > 1) || (f1 > 1) || (g1 > 1) || (h1 > 1) || (i1 > 1)) // checking whether a input is given twice.
        {
            printf("\n'ERROR':That spot is already taken.\n");
            printf("WHY you choosing %d\nChoose another spot.\n", choice);
            switch (choice)
            {
            case 1:
                a1--;
                break;
            case 2:
                b1--;
                break;
            case 3:
                c1--;
                break;
            case 4:
                d1--;
                break;
            case 5:
                e1--;
                break;
            case 6:
                f1--;
                break;
            case 7:
                g1--;
                break;
            case 8:
                h1--;
                break;
            case 9:
                i1--;
                break;
            }

            choice = chance(plr);
            prnt(plr, choice); // recalling the fun again after callinng choice agin.
        }
        else // assigning x or O on the basis of player number.
        {
            if (plr % 2 == 1)
            {
                switch (choice)
                {
                case 1:
                    a = 'X';
                    break;
                case 2:
                    b = 'X';
                    break;
                case 3:
                    c = 'X';
                    break;
                case 4:
                    d = 'X';
                    break;
                case 5:
                    e = 'X';
                    break;
                case 6:
                    f = 'X';
                    break;
                case 7:
                    g = 'X';
                    break;
                case 8:
                    h = 'X';
                    break;
                case 9:
                    i = 'X';
                    break;
                }
            }
            else
            {
                switch (choice)
                {
                case 1:
                    a = 'O';
                    break;
                case 2:
                    b = 'O';
                    break;
                case 3:
                    c = 'O';
                    break;
                case 4:
                    d = 'O';
                    break;
                case 5:
                    e = 'O';
                    break;
                case 6:
                    f = 'O';
                    break;
                case 7:
                    g = 'O';
                    break;
                case 8:
                    h = 'O';
                    break;
                case 9:
                    i = 'O';
                    break;
                }
            } // printing the choice.
            printf("  %c |  %c | %c  \n", a, b, c);
            printf("____|____|____\n");
            printf("  %c |  %c | %c  \n", d, e, f);
            printf("____|____|____\n");
            printf("  %c |  %c | %c  \n", g, h, i);
            printf("    |    |    \n");
        }
    }
}
int chance(int plr) // taking and returning the choice.
{
    int choice=0;
    static int i=1,j=1;
    if (plr % 2 == 1)
    {   
        printf("Chance %d of Player '1'\n",i++);
        printf("Enter choice 'PLAYER 1' :");
        scanf("%d", &choice);
        printf("\n");
    }
    else
    {
        printf("Chance %d of Player '2'\n",j++);
        printf("Enter choice 'PLAYER 2' :");
        scanf("%d", &choice);
        printf("\n");
    }
    return choice;
}
int win() // checkwin
{
    if ((a == b) && (b == c) || (a == d) && (d == g) || (a == e) && (e == i))
    {
        if (a == 'X')
        {
            printf("\nGGs\nPayer '1' WON.\nBetter Luck next time Player '2'.\n");
            // printf("CO1\n");S
        }
        else
        {
            printf("\nGGs\nPayer '2' WON.\nBetter Luck next time Player '1'.\n");
            // printf("CO1\n");
        }
        return 1;
    }
    else if ((e == b) && (b == h))
    {
        if (b == 'X')
        {
            printf("\nGGs\nPayer '1' WON.\nBetter Luck next time Player '2'.\n");
            // printf("CO2\n");
        }
        else
        {
            printf("\nGGs\nPayer '2' WON.\nBetter Luck next time Player '1'.\n");
            // printf("CO2\n");
        }
        return 1;
    }
    else if ((c == i) && (i == f) || (c == e) && (e == g))
    {
        if (c == 'X')
        {
            printf("\nGGs\nPayer '1' WON.\nBetter Luck next time Player '2'.\n");
            // printf("CO3\n");
        }
        else
        {
            printf("\nGGs\nPayer '2' WON.\nBetter Luck next time Player '1'.\n");
            // printf("CO3\n");
        }
        return 1;
    }
    else if ((e == d) && (d == f))
    {
        if (d == 'X')
        {
            printf("\nGGs\nPayer '1' WON.\nBetter Luck next time Player '2'.\n");
            // printf("CO4\n");
        }
        else
        {
            printf("\nPlayer 2 WON.");
            // printf("CO4\n");
        }
        return 1;
    }
    else if ((g == h) && (h == i))
    {
        if (h == 'X')
        {
            printf("\nGGs\nPayer '1' WON.\nBetter Luck next time Player '2'.\n");
            // printf("CO5\n");
        }
        else
        {
            printf("\nGGs\nPayer '2' WON.\nBetter Luck next time Player '1'.\n");
            // printf("CO5\n");
        }
        return 1;
    }
    else if (a1 == 1 && b1 == 1 && c1 == 1 && d1 == 1 && e1 == 1 && f1 == 1 && g1 == 1 && h1 == 1 && i1 == 1)
    {
        printf("\nIt's a DRAW.\nGG both of you.");
        // printf("CO6\n");
    }
}
int main()
{
    int plr = 1, choice, count = 0;

    prnt(0, 0); // printing the sample and the instruction.
    while (plr <= 9 && count == 0)
    {
        choice = chance(plr);
        system("cls");
        prnt(plr, choice); // printing the skeleton and the choice.
        if (plr >= 5)
        {
            count = win(); // checking win.
        }
        plr++;
    }
    return 0;
}
