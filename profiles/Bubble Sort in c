// C program for implementation of Bubble sort 
#include <stdio.h> 

// Swap function 
void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++) 

		// Last i elements are already 
		// in place 
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr, j, j + 1); 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 5, 1, 4, 2, 8 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, N); 
	printf("Sorted array: "); 
	printArray(arr, N); 
	return 0; 
}
