#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch, *fname;
    fname = malloc(100 * sizeof(char));
    // char *buff = malloc(sizeof(char)*100);
    printf("Enter the file name: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");

    if ( fp == NULL)
    {
        printf("Error creating the file\n");
        return 1;
    }

    // fgets(buff, 200, fp);
    // printf("1: %s\n", buff);

    // fgets(buff, 200, fp);
    // printf("2: %s\n", buff);

    while ((ch = fgetc(fp)) != EOF)
    {
        // (ch = fgetc(fp));
        // if(feof(fp))
        //     break;
        printf("%c", ch);
    }

    fclose(fp);
    // free(buff);
    free(fname);
}