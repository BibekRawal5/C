#include <stdio.h>

int sum(int *ptr)
{
    int sums = 0;
   for(int i =0 ; i <5; i++)
   {
        sums += *ptr;
        ptr++;
   }
   printf("%d\n", sums);
   
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    sum(ptr);
}