#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void readArray(int* pointer, int arraySize)//function that takes as input an array and it's size,reads the values of the array and checks if there is a reading value
{                                          //such as pointer[i]<0.If the previous condition is TRUE then prints "Wrong Input" and programm exits.
	for (int i = 0; i < arraySize; i++)
	{
		scanf("%d", &pointer[i]);
		if (pointer[i] < 0)
		{
			printf("Wrong Input");
			exit(0);
		}
	}
}

int maxArrayElement(int array[], int arraySize)//function that takes as input an array and it's size and returns his max element 
{
	int indexMax = 0;
	for (int i = 1; i < arraySize; i++)
		if (array[i] > array[indexMax])
			indexMax = i;

	return array[indexMax];
}

int totalBurles(int array[], int arraySize, int maxElement)//function that takes as input an array,it's size and max element and returns how many burles are needed
{
	int totalSum = 0;
	for (int i = 0; i < arraySize; i++)
		totalSum += maxElement - array[i];

	return totalSum;
}