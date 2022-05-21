#include "stdio.h"

int main()
{
  float length;
  float breadth;
  float result;

  printf("Input length of square");
  scanf("%f", &length );

  printf("Input breadth of square");
  scanf("%f", &breadth );

  result= length * breadth;

  printf("Area of Square = %f\n", result );

}
