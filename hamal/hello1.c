#include <stdio.h>
#include <conio.h>

int main()
{
    char str[] = "HELLO";
    int i, j;

    for(i = 0; i < 9; i++)
    {
        if(i < 5)
        {
            for(j = 0; j <= i; j++)
            {
                printf("%c ", str[j]);
            }
            printf("\n");
        }

        else
        {
            for(j = 4; j >= i - 4; j--)
            {
                printf("%c ", str[4-j]);
            }
            printf("\n");
        }
    }


}