#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("D:\\C\\ram.txt", "w");

    if ( fp == NULL)
    {
        printf("Error creating the file\n");
        return 1;
    }
    char *s= "welcome buddy\n";
    fprintf(fp, s);
    fputs("This is testing for fputs\n", fp);

    fclose(fp);
}