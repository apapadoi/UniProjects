//Header.c:includes the code of the custom functions used in main function in Source.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readArray(int* pointer, int tableSize)//function that takes as input an array and it's size,reads the values of the array and checks if there is a reading value
{                                          //such as pointer[i]<0.If the previous condition is TRUE then prints "Wrong Input" and programm exits.
	for (int i = 0; i < tableSize; i++)
	{
		scanf("%d", &pointer[i]);
		if (pointer[i] < 0)
		{
			printf("Wrong Input");
			exit(0);
		}
	}
}

void swap(int* a, int* b)//function that gets as input two pointers and swaps the values that are saved in these addresses
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

char checkSum(int* pointerA, int* pointerB, int tableSize)//function that gets as input two arrays,their size(sizeA=sizeB(A,B=arrays)) and checks if the two last elements(array B 
{														  //is sorted) B[tableSize - 1]+B[tableSize - 2]>=totalSum.if the previous condition is TRUE then function returs 1 else returns 0	
	if (pointerB[tableSize - 1] + pointerB[tableSize - 2] >= arraySum(pointerA, tableSize))//calling tableSum function
		return 1;
	
	return 0;
}

void sort(int n, int* ptr)//function that gets as input one array and does increasing sorting on the elements of the array
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (*(ptr + j) < *(ptr + i))
				swap(ptr + j, ptr + i);
}

int arraySum(int* pointer, int tableSize)//function that gets as input one array,sum's up it's elements and returns the sum 
{
	int sum = 0;
	for (int i = 0; i < tableSize; i++)
		sum += pointer[i];

	return sum;
}

char checkArraysValues(int* pointerA, int* pointerB, int tableSize)//function that gets as input two arrays,their size(sizeA=sizeB(A,B=arrays)) and checks if there is an i index such 
{																   // as A[i]>B[i].If the previous condition is TRUE then function returns 0 else returns 1
	for (int i = 0; i < tableSize; i++)
		if (pointerA[i] > pointerB[i])
			return 0;

	return 1;
}
