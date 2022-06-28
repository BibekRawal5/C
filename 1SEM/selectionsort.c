#include <stdio.h>


int main ()
{
    int arr[100];
    int temp;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 100; i > 0; i--)
    {
        arr[100 - i] = i ;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
      for ( int i =0; i < 100; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    
}