#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[50];
	char address[50];
	int c, iit;
};

int main(){
	int n, i, total;
	struct student *stu;
	
	printf("Enter number of students: ");
	scanf("%d", &n);
	
	stu = malloc(sizeof(struct student) * n);
	
	for(i = 0; i < n; i++){
		printf("Enter data no %d\n", i+1);
		fflush(stdin);
		printf("Name = ");
		gets((stu+i)->name);
		printf("Address = ");
		gets((stu+i)->address);
		printf("c = ");
		scanf("%d", &(stu+i)->c);
		printf("IIT = ");
		scanf("%d", &(stu+i)->iit);
	}
	
	printf("Total marks of students\n\n");
	
	for(i = 0; i<n;i++){
		printf("Name = %s\t", (stu+i)->name);
		total = (stu+i)->c + (stu+i)->iit;
		printf("Total = %d\n", total);
	} 
	
	free(stu);
	return 0;
}