#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root;
    printf("Enter the 3 coefficient = ");
    scanf("%f %f %f", &a, &b, &c);
    root = b - sqrt(b*b - 4 * a* c) / (2 *a);
    printf("Quardatic root = %f\n\n", root);
}