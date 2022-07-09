#include <stdio.h>

int main()
{
    int arr[50] = {1,19,23,0,5};
    for (int i = 0; i < 5 - 1; i++)
    {
        for(int j = i + 1; j< 5; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    
}