#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char *buff = malloc(sizeof(char)*100);
    fp = fopen("test.txt", "r");

    if ( fp == NULL)
    {
        printf("Error creating the file\n");
        return 1;
    }

    fgets(buff, 200, fp);
    printf("1: %s\n", buff);

    fgets(buff, 200, fp);
    printf("2: %s\n", buff);

    fclose(fp);
    free(buff);
}