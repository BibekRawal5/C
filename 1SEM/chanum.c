#include <stdio.h>

int main()
{
    int num;
    int ret = scanf("%d", &num);
    if (ret == 1)
    printf("number : %d\n", num);
}