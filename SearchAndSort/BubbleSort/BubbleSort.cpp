// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void PrintArray(int arrayElements[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", arrayElements[i]);
	printf("\n");
}

void BubbleSort(int arrayElements[], int n)
{
	for (int i = 0; i < n; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n-i-1; j++)
		{
			if (arrayElements[j] > arrayElements[j + 1])
			{
				swap(&arrayElements[j], &arrayElements[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
		PrintArray(arrayElements, n);
	}

}

int main()
{

	int arrayElements[] = { 5, 8, 4, 2, 1 };
	int n = 5;
	PrintArray(arrayElements, n);

	BubbleSort(arrayElements, n);
	
	printf("Sorted Array is:\n");
	PrintArray(arrayElements, n);

	getchar();
	return 0;
}

