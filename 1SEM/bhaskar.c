#include <stdio.h>

int main()
{
    int arr[] = {1, 56, 999};
    int largest = 0, sorted_array[50];
    int i , j = 0, k, tmp;

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        while(arr[i] > 0)
        {
            tmp = arr[i] % 10;
            sorted_array[j] = tmp;
            // printf(" sort array = %d\n", sorted_array[j]);
            arr[i] /= 10;
            j++;
        }
        
    }
    for (i = 0; i < j; i++)
    {
        for(k = i + 1; k < j; k++)
        {
            if(sorted_array[i] < sorted_array[k])
            {
                tmp = sorted_array[i];
                sorted_array[i] = sorted_array[k];
                sorted_array[k] = tmp;
            }
        }
        largest = largest * 10 + sorted_array[i]; 
    }

    printf("Largest = %d\n", largest);
}