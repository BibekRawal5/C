#include <stdio.h>

int factorial(int n) 
{
   int k;
   
   for(k = 1; n > 1; n--)
      k *= n;
      
   return k;
}


int ncr(int n,int r) 
{
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}


int main() {
   int n, i, j;

   n = 5;

   for(i = 0; i <= n; i++) {
      for(j = i + 1; j <= n; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf("%4d", ncr(i, j));

      printf("\n");
   }
 
}