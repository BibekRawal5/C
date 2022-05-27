#include <stdio.h>

int main ()
{
    int number[10];
    printf("ENter 10 random numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);

    }
    printf("The numbers in ascending order\n");
    
    int a; 

    for (int i = 0; i<10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if ( number[i] > number[j])                     // for descending order change > to <
             {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", number[i]);
    }
    
}