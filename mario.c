#include <stdio.h>

int get_height(void);
int main (void)
{
    int height = get_height();
    for(int i = 1; i <= height; i++)
    {
        for(int space =+ i  ; space <= height; space++ )
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("#");
        }
        printf(" ");
        
        for(int k = 1; k <= i; k++ )
        {
            printf("#");
        }
        
        printf("\n");
    }
}

int get_height(void)
{
    int height;
    printf("Enter height of pyramid (between 1 to 8) :");
    scanf("%i", &height);
    if (height > 8 || height <= 0)
    {
        printf("Enter height between 1 to 8 only\n");
        printf("Enter height of pyramid (between 1 to 8) :");
        scanf("%i", &height);
    }
    return height;

}