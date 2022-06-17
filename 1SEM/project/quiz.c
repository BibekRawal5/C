#include <stdio.h>
#include <string.h>            //DECLARING ALL THE LIBRARIES INCLUDE IN THE PROGRAM
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//DECLARING A STRUCT TO STORE ALL THE QUESTIONS AND ANSWERS FROM FILE
typedef struct 
{                                                               
    char question[300];
    char answer[100];

}QUIZ1;

#define SIZE 55

QUIZ1 quiz [SIZE];

//DECLARING THE FUNCTIONS TO CHANGE COLOURS OF TEXT IN TERMINAL
void green();
void red();
void reset();

int main()
{
    // INITIALIZING ALL THE VARIABLE USED IN THE PROGRAM
    int i;
    char *guess;
    char ch;
    FILE *fp;

    //ALLOCATING SPACE FOR OUR POINTER
    guess = malloc(sizeof(char) * 100);

    //OPENING AND LOADING ALL QUESTION AND ANSWERS IN THE STRUCt
    fp = fopen("QUIZ.txt", "r");

    //CHECKING JUST IN CASE THE FILE DOES NOT EXIST
    if (fp == NULL)
    {
        printf("QUIZ.txt not found for questions and answers\n");
        return 1;
    }

    for(i = 0; i < SIZE; i++)
    {
        fscanf(fp, "%[^\n] ", quiz[i].question);
        fflush(stdin);
        fscanf(fp, "%[^\n] ", quiz[i].answer);
        fflush(stdin);
    }

    fclose(fp);


    //ADDING A LOOP JUST IN CASE THE USER WANTS TO PLAY AGAIN
    do
    {   
        // USING SRAND AND RAND TO GENERATE A RANDOM NUMBER FOR QUESTION
        srand(time(NULL));
        i = rand() % SIZE;

        //PRINTING QUESTION AND LETTING USER GIVE AN INPUT
        printf("\n%s\n", quiz[i].question);
        scanf("%[^\n]s", guess);
        fflush(stdin);

        //COMPARING THE GUESS AND ANSWER
        if (strcmp(strupr(guess), strupr(quiz[i].answer)) == 0)
        {
            green();
            printf("\nCONGRATULATIONS ON THE CORRECT ANSWER\n\n");
            reset();
        }

        else
        {
            red();
            printf("\nThe correct answer : %s\n\n", quiz[i].answer);
            reset();
        }

        printf("Do you want to play again (Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
    
    }while(ch == 'y' || ch == 'Y');

    //RELEASING THE ALLOCATED MEMORY FOR GUESS AND CLOSING THE FILE
    free(guess);

    return 0;
}


//CODE FOR ALL THE COLOURS FUNCTION USED
void green()
{
    printf("\033[0;32m");
}

void red()
{
    printf("\033[0;31m");
}

void reset()
{
    printf("\033[0m");
}

