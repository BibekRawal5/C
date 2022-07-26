#include <stdio.h>
#include <conio.h>
#include <string.h>

int palindrome(char *str);

int main()
{
    int temp;
    char s1[100];

    printf("Enter the string to check for palindrome: ");
    gets(s1);

    temp = palindrome(s1);

    if(temp == 0)
        printf("The string is palindrome\n");
    
    else
        printf("The string is not palindrome\n");

    getch();
    return 0;
}

int palindrome(char *str)
{
    char cpy[100];

    strcpy(cpy, str);
    strrev(cpy);
    if(strcmp(cpy, str) == 0)
        return 0;

    else
        return 1;
}