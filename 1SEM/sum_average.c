// Find sum and average of elements in array 

#include <stdio.h>

int main ()
{ 
    int n;
    printf("How many numbers you want to put in the array: ");
    scanf("%d", &n);
    int number[n];

    // taking inputs for values of array
    printf("Enter the values of arrays\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    //for sum and average of the numbers
    int sum = 0;
    float average = 0;

    for (int i = 0; i < n; i++)
    {
        sum += number[i];
    }

    average = (float) sum/n;

    printf("Sum: %d\n", sum);
    printf("Average: %f", average);

    return 0;
}