#include <stdio.h>

int main()
{
    int i,n, sum = 0;

    for(i = 1; i < 500; i++)
    {
        sum = 0;
        n = i;
        while(n > 0)
        {
            sum +=  (n % 10) * (n % 10) * (n % 10) ;
            n /=10;   
        }
        if (sum == i)
        {
            printf("%d, ", sum);
        }
    }
}