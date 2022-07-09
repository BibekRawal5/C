#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][10], temp[10];

    for (int i = 0; i < 5; i++)
    {
        gets(s[i]);
    }
    
    for(int i = 0; i< 5; i++)
    {
        for(int j =i ; j < 5; j++)
        {
            if(strcmp(s[i], s[j]) == 1)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("ASC\n\n");
    for (int i = 0; i < 5; i++)
    {
        puts(s[i]);
    }
    


}