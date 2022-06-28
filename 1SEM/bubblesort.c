#include <stdio.h>


int main ()
{
    int arr[100];
    int temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    int swap = 0;

    for (int i = 100; i > 0; i--)
    {
        arr[100 - i] = i ;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }

        if (swap == 0)
        {
            goto already_sorted;
        }
    }

    already_sorted:

    for ( int i = 0; i < 100; i++)
    {
        printf("%d\n", arr[i]);
    }
    

}