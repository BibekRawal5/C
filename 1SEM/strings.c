#include <stdio.h>
#include <stdlib.h>

int main()
{
    //taking a string and printing it
    char *string, char *cpystring, char *constring;
    int length = 0;
    string = malloc(sizeof(char) * 100);
    printf("Enter a string: ");
    scanf(" %[^\n]s", string);
    printf("Your string : %s\n", string);

    //finding length of strings
    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length is: %d\n", length);

    // copying a string into another
    cpystring = malloc(sizeof(char) * 100);
    for (int i = 0; i < length + 1; i++)
    {
        cpystring[i] = string[i];
    }
    printf("The copied string is : %s\n", cpystring);

    // entering another string into first string
    printf("Enter another string: ");
    scanf(" %[^\n]s", string);                  // adding space(' ') before % in scanf so the compiler just doest take the enter as the newline
    printf("New string: %s\n", string);         //for string and not give us a chance to input the new string

    //making a new concated string
    constring = malloc(sizeof(char) * 200);
    int i = 0;
    int j = 0;
    for (i = 0; i < length; i++)
    {
        constring[i] = cpystring[i];
    }

    constring[i] = ' ';
    i++;

    do
    {
        constring[i] = string[j];
        i++;
        j++;
    }while(string[j] != '\0');

    printf("The concated string: %s\n", constring);
    


    
    free(string);
    free(cpystring);
    free(constring);
    return 0;
}