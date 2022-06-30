#include <stdio.h>


void merge(int arr[], int lb, int mid, int ub)
{
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int t1[n1], t2[n2];
    int i = 0, j = 0,k = lb;

    for (i = 0; i < n1; i++)
    {
        t1[i] = arr[lb + i];
    }
    
    for( i = 0; i < n2; i++)
    {
        t2[i] = arr[mid + 1 + i];
    }

    i = 0;
    j = 0;
    k = lb;

    while (i < n1 && j < n2)
    {
        if(t1[i] < t2[j])
        {
            arr[k] = t1[i];
            i++;
        }
        else
        {
            arr[k] = t2[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = t1[i];
        i++;
        k++;
    }
    
    while(j < n2)
    {
        arr[k] = t2[j];
        j++;
        k++;
    }

}


void mergesort(int arr[], int lb, int up)
{
    if(lb < up)
    {
        int mid = (lb + up)/2;

        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, up);

        merge(arr, lb, mid, up);
    }
}

int print_sorted_array(int arr[], int length)
{
    
}


int main()
{
    int arr[] = {121,23,321,231,32,5,2,12,3,51,412,52,54,53};
    int length = sizeof(arr)/sizeof(arr[0]);
    int lb = 0;
    int up = length - 1;
    mergesort(arr, lb, up);
    for(int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
}