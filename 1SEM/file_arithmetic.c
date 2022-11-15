#include <stdio.h>

int main()
{
    int n = 1;
    FILE *fp = fopen("arithmetic.txt", "w");
    while(n <= 20)
    {
        putw(n, fp);
        n++;
    }
    fclose(fp);

    fp = fopen("arithmetic.txt", "r");
	n = getw(fp);
    while (!feof(fp))
    {
       
    	printf("%d\t", n * 2);
    	n = getw(fp);
    }

    fclose(fp);
    
}