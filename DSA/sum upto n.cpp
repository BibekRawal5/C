#include <stdio.h>
#include <conio.h>

int sumn(int n)
{
	if (n <= 0)
		return 0;
	else
		return (n + sumn(n-1));
}

int main()
{
	int n;
	printf("Enter the number up to which sum you want: ");
	scanf("%d", &n);
	
	printf("Sum upto %d = %d\n", n, sumn(n));
	
	getch();
	return 0;
}
