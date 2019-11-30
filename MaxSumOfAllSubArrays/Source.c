#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#define SIZE 1000

int main(void)
{
	int A[SIZE],userChoice, totalSumArray=0,max, currentMaxSum;

	scanf("%d", &userChoice);//reading user's choice about array's size
	if (userChoice < 2 || userChoice>1000)// if user's choice is out of limits printing "Wrong Input" and programm exits
	{
		printf("Wrong Input");
		exit(0);
	}

	for (int i = 0; i < userChoice; i++)
	{
		scanf("%d", &A[i]);//reading array's elements and simultaneously finding array's total sum
		totalSumArray += A[i];
	}

	max = A[0];//we assume that A[0] is the max sum of all sub arrays

	for (int typeOfSubArray = 1; typeOfSubArray < userChoice; typeOfSubArray++)//calling findSumOfSubArray function 
	{																		   //and depending on typeOfSubArray value
		currentMaxSum = findSumofSubArray(typeOfSubArray, userChoice, A, max); //we search for the max sum of all sub arrays
		if (currentMaxSum>max)	//e.g. for typeOfSubArray==1 we search the max sum for all 1-length sub arrays for 
			max = currentMaxSum;//typeOfSubArray==2 we search the max sum for all 2-length sub arrays etc											 
	}					        //We dont calculate the max sum for typeofSubArray==userChoice because this is the totalSumArray on												   
								//line 21 and then we compare it with the current max and change max value if needed	

	if (totalSumArray > max)	//if totalSumArray>max then the max sum of all subarrays is the sum of all array's elements									 
		max = totalSumArray;											 
																		 
	if (max < 0) //if max<0 then the max sum of all subarrays is the sum of empty sub array,so 0
		max = 0;

	printf("%d", max);

	return 0;
}

