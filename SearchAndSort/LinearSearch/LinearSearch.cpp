// LinearSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int LinearSearch(int arrayElements[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (element == arrayElements[i])
		{
			return i;
		}		
	}

	return -1;
}

int main()
{
	printf("Linear Search:\n");
	printf("Enter the array elements:");
	printf("Enter the element to Search:");
	int arrayElements[] = { 10, 20, 30, 40, 50, 100, 120, 150 };
	int element = 120;

	int result = LinearSearch(arrayElements, 8, element);

	if (result == -1) printf("Element Not found");
	else
		printf("Element Found");

	getchar();
	return 0;
}

