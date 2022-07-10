#include <stdio.h>

typedef struct 
{
    char name[20];
    int age;
    float height;
}person;

person people[10];

void  print_struct(person *p)
{
    printf("Name = %s\t Age = %d\t Height = %f\n", p->name, p->age, p->height);
}

int main()
{
    for(int i =0; i<2; i++)
    {
        fflush(stdin);
        printf("#nter data of struct no %d\n ", i +1 );
        gets(people[i].name);
        scanf("%d", &people[i].age);
        scanf("%f", &people[i].height);
    }

    for(int i =0; i<2; i++)
    {
        print_struct(&people[i]);
    }
}