//Source.c:Includes main function of the programm
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#define N 100000//defining the max size of the arrays that are going to be used 

int main(void)
{
	int userChoice;
	int A[N], B[N];
	
	scanf("%d", &userChoice);//reading user's choice about array A,B size
	if (userChoice < 2 || userChoice>100000)//checking if userChoice>=2 && userchoice<=100000 and if TRUE prints "Wrong Input" and programm finishes
	{
		printf("Wrong Input");
		exit(0);
	}

	readArray(A, userChoice);//reading array's A elements
	readArray(B, userChoice);//reading array's B elements

	if (!(checkArraysValues(A, B, userChoice)))//calling checkArraysValues/printing "Wrong Input" and programm finishes depending on function return value 
	{
		printf("Wrong Input");
		exit(0);
	}

	sort(userChoice, B);//sorting B array

	if (checkSum(A, B, userChoice))//callng checkSum and printing "Yes" or "No" depending on function return value
		printf("Yes");
	else
		printf("No");

	return 0;
}

