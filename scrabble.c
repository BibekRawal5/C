#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    int result = compute_score(player1, player2);
    if (result == 1)
    {
        printf("Player 1 wins\n");
    }
    else if(result == 2)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Its a tie\n");
    }
    
}

int compute_score(char p1[], char p2[])
{
    int result1;
    int score1 = 0;
    int score2 = 0;
    char check1[20];
    char check2[20];
    for (int i = 0 ; i<strlen(p1) ; i++)
    {
        check1[i] = toupper(p1[i]);
        if (check1[i] == 'A'|| check1[i] == 'E' || check1[i] == 'I' || check1[i] == 'L' || check1[i] == 'N' || check1[i] == 'O' || check1[i] == 'R' || check1[i] == 'S' || check1[i] == 'T' || check1[i] == 'U' )
        {
            score1 = score1 + 1;
        }
        else if (check1[i] == 'D' || check1[i] == 'G')
        {
            score1 = score1 + 2;
        }
        else if (check1[i] == 'B' || check1[i]== 'C' || check1[i]== 'M' || check1[i] == 'P')
        {
            score1 = score1 + 3;
        }
        else if (check1[i]== 'F' || check1[i] == 'H' || check1[i] == 'V' || check1[i] == 'W' || check1[i] == 'Y')
        {
            score1 = score1 + 4; 
        }
        else if (check1[i]== 'K')
        {
            score1 = score1 + 5;   
        }
        else if (check1[i]== 'J' || check1[i] == 'X')
        {
            score1 = score1 + 8;   
        }
        else if (check1[i]== 'Q' || check1[i] == 'Z')
        {
            score1 = score1 + 10;   
        }
        
    }

    for (int i = 0 ; i<strlen(p2) ; i++)
    {
        check2[i] = toupper(p2[i]);
        if (check2[i] == 'A'|| check2[i] == 'E' || check2[i] == 'I' || check2[i] == 'L' || check2[i] == 'N' || check2[i] == 'O' || check2[i] == 'R' || check2[i] == 'S' || check2[i] == 'T' || check2[i] == 'U' )
        {
            score2 = score2 + 1;
        }
        else if (check2[i] == 'D' || check2[i] == 'G')
        {
            score2 = score2 + 2;
        }
        else if (check2[i] == 'B' || check2[i]== 'C' || check2[i]== 'M' || check2[i] == 'P')
        {
           score2 = score2 + 3;
        }
        else if (check2[i]== 'F' || check2[i] == 'H' || check2[i] == 'V' || check2[i] == 'W' || check2[i] == 'Y')
        {
            score2 = score2 + 4; 
        }
        else if (check2[i]== 'K')
        {
            score2 = score2 + 5;   
        }
        else if (check2[i]== 'J' || check2[i] == 'X')
        {
            score2 = score2 + 8;   
        }
        else if (check2[i]== 'Q' || check2[i] == 'Z')
        {
            score2 = score2 + 10;   
        }
   
    }

    if (score1 > score2)
    {
        result1 = 1;
    }
    else if (score2 > score1)
    {
        result1 = 2; 
    }
    else
    {
        result1 = 3;
    }
    
    return result1;
    



}