#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]) != 0)
        {   
            printf("The string contains alphabet\n");
            count++;
            break;
        }
    }

    if(count == 0)
        printf("The string does not contain alphabets\n");


    getch();
    return 0;
}