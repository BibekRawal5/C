#include <stdio.h>
#include <stdlib.h>

int *array_diff(const int *arr1, const int n1, const int *arr2, const int n2)
{
    int *array = malloc(sizeof(int)*n1), i, j, k =0;
  for(i = 0; i < n1; i++){
    int count = 0;
    for(j = 0; j < n2; j++){
      if(arr1[i] == arr2[j])
        count++;
    }
    if(count == 0)
     { 
      array[k]= arr1[i];
      k++;
     }
  }
  for(i = 0; i<k; i++)
    printf("%d\n", array[i]);

free(array);

}

int main(){
    const int arr1[] = {1,2,2,3};
    const int arr2[] = {2};
    const int size_arr1 = 4;
    const int size_arr2 = 1;
    array_diff(arr1, 4, arr2, 1);
}