#include <stdio.h>
#include <ctype.h>

int compute_score(char p1[], char p2[]);

int main()
{
    char player1[20];
    char player2[20];
    printf("Enter your words\n");
    printf("player 1 :");
    scanf("%s", &player1);
    printf("player 2 :");
    scanf("%s", &player2);
    printf("%s and %s\n", player1, player2 );
    int result = compute_score(player1, player2);
    printf("%i\n", result);
}

int compute_score(char p1[], char p2[])
{
    int result1;
    int score1 = 0;
    int score2 = 0;
    for (int i = 0 ; i<20 ; i++)
    {
        p1[i] = toupper(p1[i]);
        if (p1[i] == 'A'|| p1[i] == 'E' || p1[i] == 'I' || p1[i] == 'L' || p1[i] == 'N' || p1[i] == 'O' || p1[i] == 'R' || p1[i] == 'S' || p1[i] == 'T' || p1[i] == 'U' )
        {
            score1 = score1 + 1;
        }
        else if (p1[i] == 'D' || p1[i] == 'G')
        {
            score1 = score1 + 2;
        }
        else if (p1[i] == 'B' || p1[i]== 'C' || p1[i]== 'M' || p1[i] == 'P')
        {
            score1 = score1 + 3 ;
        }
        else if (p1[i]== 'F' || p1[i] == 'H' || p1[i] == 'V' || p1[i] == 'W' || p1[i] == 'Y')
        {
            score1 = score1 + 4 ; 
        }
        else if (p1[i]== 'K')
        {
            score1 = score1 + 5;   
        }
        else if (p1[i]== 'J' || p1[i] == 'X')
        {
            score1 = score1 + 8;   
        }
        else if (p1[i]== 'Q' || p1[i] == 'Z')
        {
            score1 = score1 + 10;   
        }
        
    }

    for (int i = 0 ; i<20 ; i++)
    {
        p2[i] = toupper(p2[i]);
        if (p2[i] == 'A'|| p2[i] == 'E' || p2[i] == 'I' || p2[i] == 'L' || p2[i] == 'N' || p2[i] == 'O' || p2[i] == 'R' || p2[i] == 'S' || p2[i] == 'T' || p2[i] == 'U' )
        {
            score2 = score2 + 1;
        }
        else if (p2[i] == 'D' || p2[i] == 'G')
        {
            score2 = score2 + 2;
        }
        else if (p2[i] == 'B' || p2[i]== 'C' || p2[i]== 'M' || p2[i] == 'P')
        {
           score2 = score2 + 3 ;
        }
        else if (p2[i]== 'F' || p2[i] == 'H' || p2[i] == 'V' || p2[i] == 'W' || p2[i] == 'Y')
        {
            score2 = score2 + 4 ; 
        }
        else if (p2[i]== 'K')
        {
            score2 = score2 + 5;   
        }
        else if (p2[i]== 'J' || p2[i] == 'X')
        {
            score2 = score2 + 8;   
        }
        else if (p2[i]== 'Q' || p2[i] == 'Z')
        {
            score2 = score2 + 10;   
        }
        printf("%i", score2);
   
    }
    printf("%i and %i", score1 , score2);

    if (score1 > score2)
    {
        return 1;
    }
    else if (score2 > score1)
    {
        return 2; 
    }
    else
    {
        return 0;
    }
    



}