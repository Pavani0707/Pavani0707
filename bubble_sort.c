#include <stdio.h>
void bubblesort(int arr[10], int size);
void swap(int* a, int* b);
int  main()
{
	int arr[10];
	int size, i;
	printf("Enter the size of array\n");
	scanf("%d", &size);
	printf("Enter the array values\n");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	bubblesort(arr,size); 
	
	return 0;
}
void bubblesort(int arr[10], int size)
{
	int i,j;
	int pass;
	int temp;
	for(pass = 0; pass <= size - 1; pass++)
	{
		printf("The elements after pass %d are:\n", pass);
		for(i = 0; i < size - 1; i++)
		{
			if(arr[i] > arr[i+1])
			{
				/*temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				or */
				swap(&arr[i], &arr[i+1]);// function call for swapping 2 values				
			}
			for(j = 0; j < size ; j++)
				printf("%d ", arr[j]);
			printf("\n");
		}	
	}
	return;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
