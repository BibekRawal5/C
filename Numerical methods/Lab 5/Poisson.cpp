//Solve Poission's eqn

#include <stdio.h>
#include <math.h>

double FUNCTION[10]; 
int order;

double function(double x, double y)
{
	int i;
	double value = 0;
	for(i = 0; i <= order; i++)
	{
		value += FUNCTION[i] * pow(x, i) * pow(y, order - i);
	}
	return value;
}

int main(){
    int r,c,i,j;
    printf("enter the no of rows: ");
    scanf("%d", &r);
    printf("enter the no of columns: ");
    scanf("%d", &c);

    float arr[r][c];

    float left,right,top,bottom,h;
	printf("the degree of function: ");
	scanf("%d", &order);
	
	for(i = 0; i <= order; i++)
	{
		printf("Enter coefficent of X[%d] Y[%d]  : ", i, order-i);
		scanf("%lf", &FUNCTION[i]);
	}
	
	printf("Enter the value at: \n");
    printf("left: ");
    scanf("%f", &left);
    printf("right: ");
    scanf("%f", &right);
    printf("top: ");
    scanf("%f", &top);
    printf("bottom: ");
    scanf("%f", &bottom);

    printf("enter the value of mesh length (h): ");
    scanf("%f", &h);


    //initial setup
    for(i=0;i<=r; i++){
        for(j=0; j<=c; j++){
            if(j==0){
                arr[i][j] = left;
            }else if(j==r){
                arr[i][j] = right;
            }else if(i==0){
                arr[i][j] = top;
            }else if(i==c){
                arr[i][j] = bottom;
            }else{
                arr[i][j] = 0; //assuming initial temp at center is 0 
            }
        }
    }

float temp[r][c];
int flag, op = (((r+1)*(c+1)) - (2 * (r+c))); // op is the toatl numbe rof internal grid
do{
    flag =0;

    for(i=1;i<r; i++){
        for(j=1; j<c; j++){
            temp[i][j] = arr[i][j];
        }
    }


    for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            arr[i][j] = ((arr[i+1][j] + arr[i-1][j] + arr[i][j+1] + arr[i][j-1] - ( h*h * function(i, j)) )/4);
        }
    }



     for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            if(fabs(arr[i][j] - temp[i][j]) < 0.0001){
                flag++;
            }
        }
    }

}while(flag != op);
    printf("\n ");
    for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            printf("(%d , %d): %.3f\n", i,j,arr[i][j]);
        }
    }


    return 0;
}


