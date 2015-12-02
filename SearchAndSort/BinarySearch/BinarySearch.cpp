// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int BinarySearch(int arrayelements[], int size, int element)
{
	int startIndex = 0;
	int endIndex = size - 1;

	while (startIndex <= endIndex)
	{
		int midIndex = (startIndex + endIndex) / 2;
		if (arrayelements[midIndex] == element)
			return midIndex;

		if (element > arrayelements[midIndex])
		{
			startIndex = midIndex + 1;
		}
		else
		{
			endIndex = midIndex - 1;
		}
	}

	return -1;
}

int RecursiveBinarySearch(int arrayElements[], int startIndex, int endIndex, int element)
{
	if (endIndex < startIndex) return -1;

	int midIndex = (startIndex + endIndex) / 2;

	if (element == arrayElements[midIndex]) return midIndex;

	if (element > arrayElements[midIndex])
	{
		return RecursiveBinarySearch(arrayElements, midIndex + 1, endIndex, element);
	}
	else
	{
		return RecursiveBinarySearch(arrayElements, startIndex, midIndex - 1, element);
	}
}

int main()
{
	printf("Binary Search\n");
	printf("Enter sorted array in increasing Order:");
	printf("Enter element to Search:");

	int arrayelements[] = { 20, 40, 80, 100, 140, 180, 250, 270, 300 };
	int element = 250;

	int result = BinarySearch(arrayelements, 9, element);

	if (result != -1) printf("Element found");
	else printf("Element Not found");

	result = RecursiveBinarySearch(arrayelements, 0, 8, element);

	if (result != -1) printf("Element found");
	else printf("Element Not found");

	getchar();
	return 0;
}


