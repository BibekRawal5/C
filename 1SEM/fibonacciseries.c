#include <stdio.h>

int main()
{
    int s1,s2,n,s3;
    s1 = 0;
    s2 = 1;
    scanf("%d", &n);
    printf("%d, %d, ", s1, s2);
    while (n > 0)
    {
        s3 = s1 + s2;
        s1 = s2;
        s2 = s3;
        printf("%d, ", s3);
        n--;
    }
    
}