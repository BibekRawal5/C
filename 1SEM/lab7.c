#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr;
     scanf("%d", &n);

    arr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i< n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }

    while(*arr)
        printf("  %d\n", *arr++);
    
    free(arr);
    
}