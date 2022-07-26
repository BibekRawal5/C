#include <stdio.h>
#include <conio.h>

#define MAX 100

int largest(int *arr);
int smallest(int *arr);

int main()
{
    int arr[MAX], i, n, large, small;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value of %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    large = largest(arr);
    small = smallest(arr);

    printf("The largest number in array = %d\n", large);
    printf("The samllest in array = %d\n", small);

    getch();
    return 0;

}

int largest(int *arr)
{
    int large = *arr;
    while(*arr)
    {
        if(large < *arr)
            large = *arr++;
        else
            *arr++;
    }

    return large;
}


int smallest(int *arr)
{
    int small = *arr;
    while(*arr)
    {
        if(small > *arr)
            small = *arr++;
        else
            *arr++;
    }

    return small;
}