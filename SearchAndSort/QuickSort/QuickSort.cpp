// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void PrintArray(int arrayElements[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", arrayElements[i]);
	printf("\n");
}

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int partition(int arrayElements[], int left, int right)
{
	int x = arrayElements[right];
	int i = left - 1;

	for (int j = left; j <= right - 1; j++)
	{
		if (arrayElements[j] < x)
		{
			i++;
			swap(&arrayElements[i], &arrayElements[j]);
		}		
	}
	swap(&arrayElements[i + 1], &arrayElements[right]);
	return i + 1;
}

void QuickSort(int arrayElements[], int left, int right)
{
	if (left < right)
	{
		int p = partition(arrayElements, left, right);

		QuickSort(arrayElements, left, p - 1);
		QuickSort(arrayElements, p + 1, right);
	}

}

int main()
{
	printf("Quick Sort: \n");
	int arrayElements[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arrayElements) / sizeof(arrayElements[0]);
	
	printf("Unsorted Array:\t");
	PrintArray(arrayElements, n);
	
	QuickSort(arrayElements, 0, n - 1);

	printf("Sorted Array:\t");
	PrintArray(arrayElements, n);
	getchar();
	return 0;
}

