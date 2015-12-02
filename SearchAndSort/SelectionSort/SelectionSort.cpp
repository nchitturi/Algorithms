// SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void SelectionSort(int arrayElements[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int minIndex = i;
		
		for (int j = i+1; j < n; j++)
		{
			if (arrayElements[minIndex] > arrayElements[j])
			{				
				minIndex = j;
			}
		}
		swap(&arrayElements[i], &arrayElements[minIndex]);

		for (int k = 0; k < n; k++)
		printf("%d\t", arrayElements[k]);
		printf("\n");
		
	}
}

int main()
{
	printf("Selection Sort\n");
	printf("Enter the elements to Sort:");
	
	int arrayElements[] = {64, 25, 12, 22, 11};
	int n = 5;
	SelectionSort(arrayElements, n);
	printf("\nSorted Array is:");
	for (int i = 0; i < n; i++)
	printf("%d\t",arrayElements[i]);
	getchar();
	return 0;
}

