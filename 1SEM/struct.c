#include<stdlib.h>
#include <stdio.h>
#include <string.h>

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
    int i , j;
    person *p = malloc(sizeof(person));   
    for( i =0; i<3; i++)
    {
        fflush(stdin);
        printf("#nter data of struct no %d\n ", i +1 );
        gets(people[i].name);
        scanf("%d", &people[i].age);
        scanf("%f", &people[i].height);

    }

    for( i = 0; i < 3; i++)
    {
        *p = people[i];
        
        for( j = i + 1; j <3; j++)
        {  
		
            if (strcmp(p->name, people[j].name) == 1)
            {
            
                *p = people[i];
                people[i] = people[j];
                people[j] = *p;
            
            }
               
        }
        print_struct(&people[i]);
    }

    free(p);

}