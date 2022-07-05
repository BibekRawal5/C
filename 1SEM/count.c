#include <stdio.h>

int main()
{
    int arr[25], cpos = 0, cneg = 0, codd = 0, ceven = 0, i = 0;

    printf("Enter the numbers: \n");
    for(i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            ceven++;
        else
            codd++;

        if(arr[i] > 0)
            cpos++;
        else
            cneg++;
        
    }

    printf("Number of Positive number = %d\n", cpos);
    printf("Number of Negative number = %d\n", cneg);
    printf("Number of Even number = %d\n", ceven);
    printf("Number of Odd number = %d\n", codd);
    
}