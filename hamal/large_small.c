#include <stdio.h>

int ls[2];

int *large_small(int *arr, int n);

int main()
{
    int arr[] = {1,5,6,7,23,35,54}, *large_or_small, len;
    len = sizeof(arr)/sizeof(arr[0]);
    large_or_small = large_small(arr, len);
    printf("%d   %d\n", large_or_small[0], large_or_small[1]);

}

int *large_samll(int *arr, int n)
{
    int i;
    ls[1] = arr[0];
    ls[0] = arr[0]; 

    for (i = 0; i< n; i++)
    {
        if (ls[0] < arr[n])
        {
            ls[0] = arr[n];
        }

        if (ls[1] > arr[n])
        {
            ls[1] = arr[n];
        }

    }
    return ls;
}