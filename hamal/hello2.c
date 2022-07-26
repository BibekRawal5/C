//number 4 HELLO

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[] = "HELO";
    int i, j, space;

    for(i = 0; i < 4; i++)
    {
       for(space = i + 1; space < 4; space++)
       {
            printf(" ");
       }
       
       for(j = 0; j < i*2 + 1; j++)
       {
            printf("%c", str[i]);
       }

       printf("\n");
    }

    getch();
    return 0;

}