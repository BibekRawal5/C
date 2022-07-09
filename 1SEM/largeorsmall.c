#include<stdio.h>

int main()
{
    int arr[5], i, great, small;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    great = arr[0];

    for ( i = 1; i < 5; i++)
    {
        if(great < arr[i])
        {
            great = arr[i];   
        }
        if(small > arr[i])
            small = arr[i];    
    }
    printf("Largest = %d\n Smallest =%d\n", great, small);
    
    
}