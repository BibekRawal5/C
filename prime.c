#include "stdio.h"

int main()
{
  int number ;
  int i ;
  int remainder = 0 ;

  printf("input the number you want to check \n");

  scanf("%i",&number );

  if (number == 1 || number == 0) 
  {
    printf("1 or 0 is neither prime nor compositive \n");
  }

  else 
  {
    for (i=2 ; i<= number/2 ; i++) 
    {

      if (number%i == 0) 
      {
        remainder++ ;
      }
    }
  }

  if (remainder == 0 )
  {
    if (number>=2)
    {
     printf("%i is a prime number\n",number );
    }
  }

   else 
   {
     printf("%i is not a prime number\n",number );
   }

  if (remainder != 0) 
  {
    printf("%i is divisible by %i other numbers except 1 and itself\n" , number , remainder );
  }

}
