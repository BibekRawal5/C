// Taking 2 numbers and an operator(+,-,*,/) and calculating in function

#include <stdio.h>

float calculate(int a, int b, char op);

int main ()
{
    int num1, num2;
    char operator;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the operator (+, - , *, /)\n");

    /// leave "space(_) before %c in scanf otherwise it takes the enter pressed previously as the character"

    scanf(" %c", &operator);                        
    float result = calculate(num1, num2, operator);
    printf("The result: %f", result);
    return 0;
}

float calculate(int a, int b, char op)
{
    float result;
    if (op == '+')
    {
        result = (a + b);
    }
    else if (op == '-')
    {
        result = (a - b);
    }
    else if (op == '*')
    {
        result = (a * b);
    }
    else if (op == '/')
    {
        result = ((float) a / (float) b);
    }
    else
    {
        printf("Invalid operator\n");
        return 0;
    }
    return result;
}