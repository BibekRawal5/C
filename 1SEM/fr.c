#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TOTALWORDS 180

typedef struct
{
    char wordleword[6];
}wordle;

wordle allwords[200];

int main()
{
    FILE *fp;
    char *buff = malloc(sizeof(char)*1);
    fp = fopen("wordle.txt", "r");

    if ( fp == NULL)
    {
        printf("Error reading the file\n");
        return 1;
    }
    
    for (int k = 0; k < 180; k++)
    {
        fscanf(fp, "%s", allwords[k].wordleword);
    }
    srand(time(NULL));
    int random = rand() % TOTALWORDS;
    printf("%s", allwords[random].wordleword);
    free(buff);
    fclose(fp);

}