// MergeSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void PrintArray(int arrayElements[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", arrayElements[i]);
	printf("\n");
}

void Merge(int arrayElements[], int left, int mid, int right)
{
	int leftArray[100], rightArray[100];

	int leftArrayElements = mid - left + 1;
	int rightArrayElements = right - mid;

	for (int i = left; i <= mid; i++)
	{
		leftArray[i - left] = arrayElements[i];
	}

	for (int i = mid + 1; i <= right; i++)
	{
		rightArray[i - (mid+1)] = arrayElements[i];
	}

	int i = 0;
	int j = 0;
	int k = left;
	while (i < (mid-left+1) && j < (right - mid) && right >= left)
	{
		if (leftArray[i] < rightArray[j])
		{
			arrayElements[left] = leftArray[i];
			
			i++;
		}
		else
		{
			arrayElements[left] = rightArray[j];
			
			j++;
		}
		left++;
	}

	while (i < leftArrayElements)
	{
		arrayElements[left] = leftArray[i];
		left++;
		i++;
	}

	while (j < rightArrayElements)
	{
		arrayElements[left] = rightArray[j];
		left++;
		j++;
	}
	PrintArray(arrayElements, 6);
}

void MergeSort(int arrayElements[], int left, int right)
{
	if (right > left)
	{
		int mid = (left + right) / 2;

		MergeSort(arrayElements, left, mid);
		MergeSort(arrayElements, mid + 1, right);
		Merge(arrayElements, left, mid, right);
	}
}


int main()
{
	printf("Merge Sort:\n");
	printf("Enter the elements to sort in ascending order:");
	int arrayElements[] = { 12, 11, 8, 5, 6, 1 };
	int n = sizeof(arrayElements) / sizeof(arrayElements[0]);
	printf("Given Array:\t");
	PrintArray(arrayElements, n);

	MergeSort(arrayElements, 0, n-1);
	
	printf("Sorted Array:\t");
	PrintArray(arrayElements, n);
	getchar();
	return 0;
}

