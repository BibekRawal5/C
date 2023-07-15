#include <stdio.h>
#include <conio.h>

int main()
{
  int number ;

  printf("input the number you want to check \n");

  scanf("%i",&number );

  int i ;
  int remainder = 0 ;
  int rem;

   if (number == 1) 
   {
    printf("1 is neither prime nor compositive. \n");

   }

   else if (number == 0)
   {
     printf("0 is not a prime number\n");
   }

   else {
    for (i=2 ; i<= number/2 + 1 ; i++) {

    if ( number%i == 0 )
    {
      remainder = remainder + 1 ;
    }
	}
	}
    if (remainder == 0 ){
              printf("%i is a prime number.\n",number );
	}

    else {
              printf("%i is not a prime number.\n",number );
    }

 	if (remainder != 0) {
          printf("%i is divisible by %i other numbers except 1 and itself.\n" , number , remainder );
    }


    getch();
    return 0;
    
}
    
    
    


