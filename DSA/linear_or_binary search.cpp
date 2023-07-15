#include <stdio.h>
#include <conio.h>

int linear_search(int arr[], int n, int key)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == key)
			return i;
	}
	return -1; // key not in array
}

int binary_search(int arr[], int start, int end, int key)
{
	int mid = (start+end)/2;
	
	if(start > key)
		return -1; // key not in array
		
	else
	{
		if(arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			return binary_search(arr, mid, end, key);
		else
			return binary_search(arr, start, mid, key);
	}
}

int main()
{
	int n, i, arr[100], key;
	
	printf("Enter the number of elments in array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of array: ");
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("Enter the elements you want to search: ");
	scanf("%d", &key);
	
	i = binary_search(arr, 0, n, key);
//	i = linear_search(arr, n , key);
	
	if(i == -1)
		printf("%d is not found in array\n", key);
	else
		printf("%d is in %d position in the array\n", key, i+1);
		
	getch();
	return 0;
}
