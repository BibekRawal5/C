#include "stdio.h"

int main()
{
  int i ;
  int x;

  printf("Input the number by which you want the number to be divided\n");
  scanf("%i",&x );

  for ( i = 1; i<= 1000 ; i++)
  {

    int y = i%x ;
     if (y==0)
     {
       printf("%i\n",i );

     }

  }





}
