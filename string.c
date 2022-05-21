#include <stdio.h>
#include <string.h>

int main (void)
{
    char string[100];
    int i; 
    printf("Enter your string\n");
    fgets(string, 100, stdin);
    printf("%s\n", string);
    printf("Length of the string is : %i\n", strlen(string));
    printf( "%c\n", string [10] );
    
    for (i = strlen(string) - 1 ; i >= 0 ; i-- )
    {
       
        printf("%c", string[i]);
       
    }
   
}
