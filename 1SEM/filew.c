#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");

    if ( fp == NULL)
    {
        printf("Error creating the file\n");
        return 1;
    }

    fprintf(fp, "This the test string for fprintf\n");
    fputs("This is testing for fputs\n", fp);

    fclose(fp);
}