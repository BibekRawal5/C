#include <stdio.h>

int aos (int a , int b);

int main(void)
{
    int length ; 
    int breadth ; 
    printf("Enter length of square :");
    scanf("%i", &length);

    printf("Enter bredth of square :");
    scanf("%i", &breadth);

    int Area = aos(length , breadth);

    printf("Area of Square : %i\n", Area);

}

int aos (int a , int b)
{
    int Area1= a * b;
    return Area1;
}