//prime numbers upto N
#include <stdio.h>

int main ()
{
    int n;
    printf("You want prime numbers upto: ");
    scanf("%i", &n);
    int remainder = 0;
    for (int i = 2; i <=n ; i++)    
    {         
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                remainder++;
            }    
        }
        if (remainder == 0)
        {
            printf("%i\n", i);
        }
        else
        {
            remainder = 0;
        }
    }   
}

