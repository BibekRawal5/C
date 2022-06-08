#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//MAKING FUNCTIONS FOR ALL THE COLOUR USED
void red()
{
    printf("\033[0;31m");
}

void green()
{
    printf("\033[0;32m");
}

void yellow()
{
    printf("\033[0;33m");
}

void reset()
{
    printf("\033[0m");
}


int main ()
{
    char guess[10];
    char word[6] = "BIBEK";
    int i = 0;

    do
    {
    //TAKING THE USER FIRST GUESS AND CHECKING IF FITS IS 5 LETTER WORD
    do
    {
        printf("Guess no %d: ", i+1);
        scanf(" %s", guess);
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