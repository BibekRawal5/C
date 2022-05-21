#include <stdio.h>
#include <string.h> // for strlen, strcmp and strcpy
#include <ctype.h> // for toupper and tolower


int main(int argc, char *argv[])
{
    char text[500];
    printf("Enter plain text : ");
    fgets(text, 500 , stdin);   // input for the plain text using fgets instead of scanf so we can get space as well (" ") 
    char code[26];              // code array for making it easy to understand instead of argv in program
    for (int i = 0; i< 26; i++)
    {
        code[i] = argv[1][i];
    }
                                // declaring lowercase alphabet in array 
    char lower[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char upper[26];             // converting all lowercase alphabet from array to uppercse alphabet to upper array
    for (int i = 0; i<26; i++)
    {
        upper[i] = toupper(lower[i]);
    }
    char cipher[strlen(text)];       // Declaring the cipher text array same size as plain text
    printf("Cipher text : ");        // printing cipher text
    for (int i = 0; i < strlen(text); i++)
    {
        for (int j = 0; j < 26; j++)       
        {
            if (text[i] == lower[j] )     // checking if the character is lowercase and replacing it with uppercase code
            {
                cipher[i] = code[j];
                printf("%c", cipher[i]);
            }
            else if (text[i] == upper[j] )   // checking if the character is uppercase and replacing it with uppercase code
            {
                cipher[i] = code[j];
                printf("%c", toupper(cipher[i]));
            }
            else if (! isalpha(text[i]))     // checking if the character is not alphabet , if it is not then keeping it the same
            {
                cipher[i] = text[i];
                printf("%c", cipher[i]);
                break;                      // breaking the loop beacause or else we kkep on printing empty space for "NUL" (\0) for 26 times  
            }
          }
    }
}  