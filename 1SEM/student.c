#include <stdio.h>
#include <stdlib.h>

struct record
{
    char fname[10];
    char lname[10];
    char address[30];
    int age;
    int rollno;
};

#define MAX 100

struct record students[MAX];

int main ()
{
    // ASKING USER FOR HOW MANY STUDENTS RECORD THEY WANT TO MAKE
    int n;
    printf("Enter the number of students data you want to store (MAX is 100): ");
    scanf("%d", &n);

    // TAKING THE INPUTS OF THE RECORDS 
    for (int i = 0; i < n; i++)
    {
        printf("STUDENT %d\n", i+1);
        printf("Enter the first name: ");
        scanf("%s", &students[i].fname);
        printf("\nEnter the last name: ");
        scanf("%s", &students[i].lname);
        printf("\nEnter their address: ");
        scanf("%s", &students[i].address);
        printf("\nEnter their age: ");
        scanf("%d", &students[i].age);
        printf("\nEnter their Roll number: ");
        scanf("%d", &students[i].rollno);
        
        printf("\n\n");
    }

    // PRINTING THE GIVEN RECORDS
    printf("Name \t\tAge \tRollno \tAddress\n");

    for (int i = 0; i < n; i++ )
    {
        printf("%s %s \t%d \t%d \t%s\n", students[i].fname, students[i].lname, students[i].age, students[i].rollno, students[i].address);
    }
    return 0;
}
