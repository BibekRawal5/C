#include <stdio.h>
#include <conio.h>
#include <string.h>

int character_count(char text[]);
int word_count(char text[]);
int sentence_count(char text[]);

int main()
{
    char text[1000];
    printf("Enter the text for readibilityy test\n");
    fgets(text, 1000, stdin);
    int b = strlen(text);
    int character = character_count(text);
    int word = word_count(text);
    int sentence = sentence_count(text);
    float grade;
    grade = 0.0588 * (100 * (float)character / (float) word) - 0.296 * ((float) sentence / (float) word) - 15.8;
    if (grade < 16 && grade > 1)
    {
        printf("Grade %i\n", (int)grade);
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade 1\n");
    }
}

int character_count(char text[])
{
    int count = 0;
    for(int i = 0 ; i< strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            count++;
        }
       
    }
    return count;
    
}

int word_count(char text[])
{
    int count = 0;
    for(int i = 0 ; i< strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
       
    }
    return count;
    
}

int sentence_count(char text[])
{
    int count = 0;
    for(int i = 0 ; i< strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count++;
        }
       
    }
    return count;
    
}