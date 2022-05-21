#include <stdio.h>
#include <string.h>

int main (void)
{
    int numbers[] = {4, 6, 5, 7, 0, 8, 2};

    for (int i = 0 ; i<7 ; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found 0 \n");
            return 0; 
        }
    }
    printf("0 not found \n");
    return 1;
}