#include <stdio.h>
#include <stdlib.h>

void getstring(char *string);
void prntstring(char *string);
int strlen(char *string);
void copystring(char *string, char *cpystring);
void constring(char *string, char *cpystring, char *concatedstring);

int main ()
{
    // Declaring all the variable
    char *string, *cpystring, *concatedstring;
    int length = 0;

    //Declaring size of each string
    string = malloc(sizeof(char) * 100);
    cpystring = malloc(sizeof(char) * 100);
    concatedstring = malloc(sizeof(char) * 200);
    
    //getting the string and printing it with own functions
    getstring(string);
    prntstring(string);

    //getting string length
    length = strlen(string);
    printf("The length of you string is : %i\n", length);

    //copying string
    copystring(string, cpystring);
    printf("The copied string is : %s\n", cpystring);

    //getting another string instead of the first one and printing it
    getstring(string);
    prntstring(string);

    //concating the two strings
    constring(string, cpystring, concatedstring);    
    printf("The concated string is: %s\n", concatedstring);



    free(string);
    free(cpystring);
    free(concatedstring);

    
}

void getstring(char *string)
{
    printf("Enter your string: ");
    scanf(" %[^\n]s", string);
}

void prntstring(char *string)
{
    printf("Your string is : %s\n", string);
}

int strlen(char *string)
{
    int stringlen = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        ++stringlen;
    }
    return stringlen;
}

void copystring(char *string, char *cpystring)
{
    int i = 0;
   do
    {
        cpystring[i] = string[i];
        i++;
    }while (string[i] != '\0');
    cpystring[i] = '\0';
}

void constring(char *string, char *cpystring, char *concatedstring)
{
    int i = 0, j = 0;
    for ( i = 0; cpystring[i] != '\0'; i++)
    {
        concatedstring[i] = cpystring[i];
    }

    concatedstring[i] = ' ';
    i++;

    for ( j = 0; string[j] != '\0'; j++)
    {
        concatedstring[i] = string[j];
        i++;
    }
    concatedstring[i] = '\0';
    
}

