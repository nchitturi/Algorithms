// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void PrintArray(int arrayElements[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", arrayElements[i]);
	printf("\n");
}

void InsertionSort(int arrayElements[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arrayElements[i];

		int j = i - 1;
		bool updated = false;

		while (j >= 0 && arrayElements[j] > key)
		{
			arrayElements[j + 1] = arrayElements[j];
			j = j - 1;
			updated = true;
		}
		
		if(updated) arrayElements[j + 1] = key;		
		PrintArray(arrayElements, n);
	}
}

int main()
{
	printf("Insertion Sort:\n");
	int arrayElements[] = { 12, 11, 13, 5, 6 };
	int n = 5;
	printf("Given Array:\t");
	PrintArray(arrayElements, n);

	InsertionSort(arrayElements, n);

	printf("Sorted Array:\t");
	PrintArray(arrayElements, n);
	getchar();
    return 0;
}

