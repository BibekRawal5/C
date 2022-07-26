#include <stdio.h>
#include <conio.h>

#define MAX 200

void display_name(char name[][50], int n);

int main()
{
    int n, i;
    char name[MAX][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("Enter name of %d student: ", i+1);
        fflush(stdin);
        gets(name[i]);
    }

    display_name(name, n);

    getch();
    return 0;
}

void display_name(char name[][50], int n)
{
    int i;
    for(i = 0; i<n; i++)
        printf("Student %d: %s\n", i+1, name[i]);
}