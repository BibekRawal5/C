#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char name[20];
    int age;
    float height;
}person;

person people[10];


//void  print_struct(person *p)
//{
//    printf("Name = %s\t Age = %d\t Height = %f\n", p->name, p->age, p->height);
//}

int main()
{
    int i , j;
    person p;   
    for( i =0; i<2; i++)
    {
        fflush(stdin);
        printf("#nter data of struct no %d\n ", i +1 );
        gets(people[i].name);
//                scanf("%d", &people[i].age);
//        scanf("%f", &people[i].height);

    }
//printf("%d\n", p->age);
//            return 0;
//  print_struct(&people[1]);

    for( i = 0; i < 2; i++)
    {
        p = people[i];
        people[i] = people[1];
        printf("\n%s\n", p.name);
//        
//        for( j = i + 1; j <2; j++)
//        {  
//			printf("\n%s\n", people[j].name);
//            if (strcmp(p->name, people[j].name) == 1)
//            {
//            
//                *p = people[i];
//                people[i] = people[j];
//                people[j] = *p;
//                 printf("\n%s\n", p->name);
//                 printf("\n%s\n", people[j].name);
//                 
//            
//            }
//               
//           
//            // else
//            // {
            //     *p = people[j];
            // }
            
//        }
       
//        print_struct(&people[i]);
    }

}