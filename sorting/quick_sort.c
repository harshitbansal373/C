// quick sorting

#include<stdio.h>

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++) 
	{ 
		if (arr[j] < pivot) 
		{ 
			i++;
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{
		int pi = partition(arr, low, high); 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for(i = 0; i < size; i++) 
		printf("%3d",arr[i]); 
	printf("\n");
} 


int main() 
{ 
    int n,i,value;
    printf("enter number of number elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&value);
        arr[i]=value;
    }
    printf("\narray elements\n");
    for(i=0;i<n;i++){
        printf("%3d",arr[i]);
    }
    
	quickSort(arr, 0, n - 1); 
	printf("\n Quick Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
