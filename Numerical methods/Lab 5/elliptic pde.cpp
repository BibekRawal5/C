//Solve eliptical PDE by Gauss Seidel
#include <stdio.h>
#include <math.h>

int main(){
    int r,c,i,j;
    printf("enter the no of rows: ");
    scanf("%d", &r);
    printf("enter the no of columns: ");
    scanf("%d", &c);
    float arr[r][c];
    float left,right,top,bottom;
    printf("enter the value at left: ");
    scanf("%f", &left);
    printf("enter the value at right: ");
    scanf("%f", &right);
    printf("enter the value at top: ");
    scanf("%f", &top);
    printf("enter the value at bottom: ");
    scanf("%f", &bottom);


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
int flag = 0, op = (((r+1)*(c+1)) - (2 * (r+c))); // op is the toatl number of internal grid
do{
    flag =0;

    for(i=1;i<r; i++){
        for(j=1; j<c; j++){
            temp[i][j] = arr[i][j];
        }
    }


    for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            arr[i][j] = ((arr[i+1][j] + arr[i-1][j] + arr[i][j+1] + arr[i][j-1] )/4);
        }
    }



     for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            if(fabs(arr[i][j] - temp[i][j]) < 0.00000001){
                flag++;
            }
        }
    }

}while(flag != op); 
    printf("\n\n");
    for(i=1; i<r; i++){
        for(j=1; j<c; j++){
            printf("(%d , %d): %.3f\n", i,j,arr[i][j]);
        }
    }


    return 0;
}
