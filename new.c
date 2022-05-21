#include "stdio.h"

 int main ()
{
 int a ;
 int b ;
 int c ;
 int math ;

printf("Enter your first number \n");
scanf("%i", &a);

printf("Enter your second number \n");
scanf("%i", &b);

printf("Enter your third numiber \n" );
scanf("%i", &c);

printf("What do you want to do with these number (1. add , 2. subtract , 3. multiply , 4. divide ) Enter the respective number .\n");
scanf("%i", &math);

if ( math == 1) 
{

  int addition =  a + b + c ;

  printf("The addition of these numbers is : %i\n",addition );

}

else if ( math == 2) 
{

  int subtract = a - b - c ;
  printf("The subtraction of these numbers is : %i\n",subtract);
}

else if ( math == 3) 
{

  int multiplication = a * b * c ;
  printf("The subtraction of these numbers is : %i\n",multiplication);
}

else if ( math == 4) 
{

  int divison = a / b / c ;
  printf("The divison of these numbers is : %i\n",divison);
}


}
