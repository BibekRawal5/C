#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[100], n, i, j, high, low, temp;

    printf("enter no of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter mark of student no %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    low = marks[0];
    high = marks[0];

    for(i = 0; i <n; i++)
    {
        for (j = i; j < n; j++)
        {
            if(marks[i] < marks[j])
            {
                temp = marks[i];
                if(high < marks[j])
                {
                   high = marks[j]; 
                }

                if(low > marks[j])
                {
                    low = marks[i];
                }

                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("The marks in descending ordr is : \n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]);
    }

    printf("The highest = %d\n", high);
    printf("The lowest = %d\n", low);

}