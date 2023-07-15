#include <stdio.h>
#include <conio.h>

void merge_sorted_array(int arr[], int s, int m, int m1, int e);

void merge_sort(int arr[], int start, int end)
{
	int mid;
	if(start < end)
	{
		mid = (start+end)/2;
		merge_sort(arr, start, mid);
		merge_sort(arr, mid+1, end);
		merge_sorted_array(arr, start, mid, mid+1, end);
	}
}

void merge_sorted_array(int arr[], int s, int m, int m1, int e)
{
	int temp[100];
	int i = s, j = m1, k = 0;
	
	while(i <= m && j <= e)
	{
		if(arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
			temp[k++] = arr[j++];
	}
	
	while(i <= m)
		temp[k++] = arr[i++];
	
	while(j <= e)
		temp[k++] = arr[j++];
	
	for(i = s, j = 0; i <= e; i++, j++)
		arr[i] = temp[j];
		
}

int main()
{
	int arr[100], n, i;
	
	printf("Enter the number of elements of array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of Array: ");
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	merge_sort(arr, 0, n-1);
	
	printf("Sorted Array: ");
	for(i = 0; i <n; i++)
		printf("%d\t", arr[i]);
	printf("\n");
	
	getch();
	return 0;
}

