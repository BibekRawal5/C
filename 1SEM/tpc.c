#include<stdio.h>
#include<string.h>

struct student {
	char name[20];
	char address[80];
	int salary;
	
} stu[10];

int main ()
{
	int i,j ;
	
	struct student temp;
	
	for(i=0 ; i<5 ; i++)
	{
		printf(" Enter the name: ");
		scanf("%s",&stu[i].name);
		
		printf("ENter the address: ");
		scanf("%s",&stu[i].address);
		
		printf("ENter the salary: ");
		scanf("%d",&stu[i].salary);
	
	}
	
	printf(" NAME of employees in ascending order");
	
	for(i=0 ; i<5 ; i++)
	{
	for ( j=i+1 ; j<5 ; j++)
	{
	if ( strcmp(stu[i].name,stu[j].name)==1)
	{
		strcpy(temp.name,stu[i].name);
		strcpy(temp.address,stu[i].address);;
		temp.salary = stu[i].salary;
		
		strcpy(stu[i].name,stu[j].name);
		strcpy(stu[i].address,stu[j].address);;
		stu[i].salary = stu[j].salary;
		
		strcpy(stu[j].name,temp.name);
		strcpy(stu[j].address,temp.address);;
		stu[j].salary = temp.salary;
	}
}
     printf(" %s %s %d\n", stu[i].name,stu[i].address,stu[i].salary);
	
	
}
	return 0;
	
}