#include<stdio.h>
#include<conio.h>

struct student{
	char name[20];
	int marks;
	char grade;
};
 
 ;
int main()
{
	int i;
	
	struct student stu[5] = {{"RAM",100,'C'},  {"GITA",130,'B'}, {"SITA", 120,'B'}, {"GOPAL",150,'A'}};

	printf(" S.N /t NAME /t TOTAL MARKS /t GRADE \n ");
	
	for ( i= 0 ; i<4 ; i++)
	{
		printf(" %d , %s , % d , %c\n",i+1, stu[i].name, stu[i].marks, stu[i].grade);
	}
	 
   getch();
   
   return 0 ;
	
}