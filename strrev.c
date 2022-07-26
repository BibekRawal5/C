#include <stdio.h>
#include <string.h>

int main()
{
    char s1[14] = "Bibek Rawal";
    char s2[13];
    int i = 0;
    int len = 0;

    for(i = 0; s1[i] != '\0'; i++)
        len++;

        
    for(i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[len - 1 - i];
    }
    s2[i] = '\0';

    printf("%s\n", s2);
}