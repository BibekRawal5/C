#include "stdio.h"

int main ()
{
   int number ;

   printf("Input your number to check if its even or odd\n");
   scanf("%i", &number );

   int check = number % 2 ;

   if (check == 0) {

     printf("Your number is even \n");

   }
   else

  {   printf("Your number is odd\n");


}


}
