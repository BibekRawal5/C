#include "stdio.h"

int main ()
{
int mynumber = 43;
float realnumber = 56.43;
float total ;
int inputnumber ;

printf("Input your number \n");
scanf("%inputnumber",  &inputnumber);
total = mynumber + realnumber + inputnumber ;

printf("Your input number: %i\n" , inputnumber);
printf("My number : %i\n",mynumber );
printf("Given real number : %f\n",realnumber );
printf("Your total : %f\n",total );

}
