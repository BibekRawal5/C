#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// MAKING A CONSTANT FOR TOTAL WORDS WE HAVE AVAILABLE
#define TOTALWORDS 5757

//MAKING FUNCTIONS FOR ALL THE COLOUR USED
void red();

void green();

void yellow();

void reset();

typedef struct
{
    char wordleword[6];
}wordle;

wordle allwords[TOTALWORDS];



int main ()
{
    char guess[10];
    char word[6];
    int i = 0;

    //OPENING THE WORDLE TEXT FILE FOR SELECTING A RANDOM WORD
    FILE *fp;
    fp = fopen("wordle.txt", "r");

    if ( fp == NULL)
    {
        printf("Error reading the file\n");
        return 1;
    }
    
    for (int k = 0; k < TOTALWORDS; k++)
    {
        fscanf(fp, "%s", allwords[k].wordleword);
    }
    fclose(fp);

    //GENERATING A RANDOM WORD OUT OF ALL THE WORDS WE HAVE
    srand(time(NULL));
    int random = rand() % TOTALWORDS;
    strcpy(word, allwords[random].wordleword);

    green();
    printf("WELCOME TO WORDLE\n");
    reset();

    do
    {
        //TAKING THE USER FIRST GUESS AND CHECKING IF FITS IS 5 LETTER WORD
        do
        {
            printf("Guess no %d: ", i+1);
            scanf("%s", guess);
            fflush(stdin);
        }while(strlen(guess) != 5);

        //MAKING THE USER GIVEN WORD IN UPPERCASE TO COMPARE IT WITH THE RANDOM SELECTED WORD BY COMPUTER FROM FILE
        for (int j = 0; j < strlen(guess); j++)
        {
            guess[j] = toupper(guess[j]);
        }


        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (guess[i] == word[i])
                {
                    green();
                    printf("%c", guess[i]);
                    reset();
                    goto jump;
                }
                else if (guess[i] == word[j])
                {
                    yellow();
                    printf("%c", guess[i]);
                    reset();
                    goto jump;                            // SETTINGUP A GOTO TO  GET OUT OF NESTED LOOP NESTED LOOP
                }
                
            }
            
            printf("%c", guess[i]);

            jump: ;                                      // GOTO jump posotion
        
        }
        printf("\n");

        //CHECKING IF USER HAS GUESSED THE CORRECT WORD
        if (strcmp(guess, word) == 0)
        {
            green();
            printf("CONGRATULATION ON GUESSING THE CORRECT WORD\n");
            reset();
            return 0;
        }
        i++;
    }while( i < 5); 

    // PRINTING THE CORRECT ANSWER FOR THE USER AFTER 5 FAIL ATTEMPT
    red();
    printf("The corect word: %s\n", word);
    reset();
    return 0;
    
}



//CODE FOR ALL THE COLOURS USED IN THE PROGRAM
void red()
{
    printf("\033[0;31m");
}

void yellow()
{
    printf("\033[0;33m");
}

void green()
{
    printf("\033[0;32m");
}

void reset()
{
    printf("\033[0m");
}
