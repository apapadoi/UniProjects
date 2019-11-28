//Source.c:Includes main function of the programm
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#define N 100

int main(void)
{
	int maxElement,population,A[N];

	scanf("%d", &population);
	if (population < 1 || population>100)//checking if population of Berland<1 or population of Berland<=100000 and if TRUE prints "Wrong Input" and programm finishes
	{
		printf("Wrong Input");
		exit(0);
	}

	readArray(A, population);//reading array's A elements
	maxElement = maxArrayElement(A, population);//finds array's A max element
	printf("%d", totalBurles(A, population, maxElement));//calculatin and printing total Burles needed

	return 0;
}

