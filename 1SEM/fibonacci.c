#include <Stdio.h>

void fibonacci(int a, int b, int times);

int main()
{
    int a = 0, b = 1, times;
    printf("How long the series you want to be: ");
    scanf("%i", &times);
    printf("%d, %d, ", a, b);
    fibonacci(a, b, times);
}

void fibonacci(int a, int b, int times)
{
    int temp;
    temp = b;
    b = a + temp;
    a = temp;
    if ( times <= 0)
    {
        return;
    }
    else
    {
        printf("%d, ", b);
        fibonacci(a, b, times - 1);
    }
}