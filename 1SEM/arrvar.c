#include <stdio.h>

int main()
{
    int arr[5];
    printf("NUmber\tArrayvariable\taddress\n");
    for(int i = 0; i<5;i++)
    {
        printf("%d\tarr[%d]\t%i\n",arr[i],i,&arr[i]);
    }
}