#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char name[20], address[50];
	int i, roll;
	FILE *fp;
	fp = fopen("input.txt", "w");
	
	for(i = 0; i< 10; i++){
		printf("Name = ");
		gets(name);
		printf("roll = ");
		scanf("%d", &roll);
		printf("Address: ");
		fflush(stdin);
		gets(address);
		fprintf(fp, "%s\t%d\t%s\n", name, roll, address);
	}
	
	fclose(fp);
	
	fp = fopen("input.txt", "r");
	printf("Student whose address is KTM:\n");
	for(i = 0; i< 10; i++){
		fscanf(fp,"%s%d%s", name, &roll, address);
		if(strcmp(address, "KTM") == 0){
			printf("%s\n", name);
		}
	}
	fclose(fp);
}
