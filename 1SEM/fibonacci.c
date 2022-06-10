#include <Stdio.h>

void fibonacci(int a, int b, int times);

int main()
{
    int a = 0, b = 1, times;
    printf("How long the series you want to be: ");
    scanf("%i", &times);
    fibonacci(a, b, times);
}

void fibonacci(int a, int b, int times)
{
    int temp;
    printf("%d, %d, ", a, b);
    temp = a;
    a = b + temp;
    b = a + b;
    if ( times <= 0)
    {
        return;
    }
    else
    {
        fibonacci(a, b, times - 2);
    }
}