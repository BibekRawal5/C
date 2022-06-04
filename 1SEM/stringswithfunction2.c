#include <stdio.h>
#include <stdlib.h>

void getstring(char *s);
void prntstring(char *s);
int strlen(char *s);
void copystring(char *s, char *cs);
void constring(char *s, char *cs, char *constring);

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

    // freeing memory since we sue malloc to allocate the memory or else we may suffer from memory leak
    free(string);
    free(cpystring);
    free(concatedstring);

    
}

void getstring(char *s)
{
    printf("Enter your string: ");
    scanf(" %[^\n]s", s);
}

void prntstring(char *s)
{
    printf("Your string is : %s\n", s);
}

int strlen(char *s)
{
    int stringlen = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        ++stringlen;
    }
    return stringlen;
}

void copystring(char *s, char *cs)
{
    int i = 0;
   do
    {
        cs[i] = s[i];
        i++;
    }while (s[i] != '\0');
    cs[i] = '\0';
}

void constring(char *s, char *cs, char *constring)
{
    int i = 0, j = 0;
    for ( i = 0; cs[i] != '\0'; i++)
    {
        constring[i] = cs[i];
    }

    constring[i] = ' ';
    i++;

    for ( j = 0; s[j] != '\0'; j++)
    {
        constring[i] = s[j];
        i++;
    }
    constring[i] = '\0';
    
}

