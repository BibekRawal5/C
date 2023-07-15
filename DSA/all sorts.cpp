#include <stdio.h>
#include <conio.h>

void selection_sort(int arr[], int n)
{
	int i, j, min, tmp;
	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i+1; j < n; j++)
			if(arr[min] > arr[j])
				min = j;
		
		if(min != i)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp; 
		}
	}
}

void bubble_sort(int arr[], int n)
{
	int i, j, temp, swap;
	for (i = 0; i < n - 1; i++)
    {
    	swap = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }

        if (swap == 0)
        {
            return;
        }
    }
}

void insertion_sort(int arr[], int n)
{
	int i, j, tmp;
	
	for(i = 1; i <= n - 1; i++)
	{
		tmp = arr[i];
		j = i - 1;
		while((tmp < arr[j] )&& (j >= 0))
		{
			arr[j + 1] = arr[j];
			j = j -1;
		}
		arr[j + 1] = tmp;
	}
	
}

void quick_sort(int arr[], int l, int h)
{
	int tmp, key, low = l, high = h;
	key = arr[(low + high)/2];
	
	do
	{
		while(key > arr[low])
			low++;
		
		while(key < arr[high])
			high--;
		
		if(low <= high)
		{
			tmp = arr[low];
			arr[low++] = arr[high];
			arr[high--] = tmp;
		}
	}while(low <= high);
	
	if(l < high)
		quick_sort(arr, l, high);
	if(low < h)
		quick_sort(arr, low, h);
}

int main ()
{
    int arr[100];
    int temp, i;

    for (i = 100; i > 0; i--)
    {
        arr[100 - i] = i ;
    }
	
//	selection_sort(arr, 100);
//	bubble_sort(arr, 100);
//	insertion_sort(arr, 100);
	quick_sort(arr, 0 , 99);
		
    for (i =0; i < 100; i++)
    {
        printf("%d\n", arr[i]);
    }

}
