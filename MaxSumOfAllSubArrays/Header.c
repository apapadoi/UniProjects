#define _CRT_SECURE_NO_WARNINGS

int findSumofSubArray(int sizeOfSubArray, int userChoice, int array[], int maxSum)
{
	int unstabilizedIndex, sum;
	for (int j = 0; j < userChoice; j++)//start from the first element of the array and then we add the values until
	{		// we reach the sizeOfSubArray that main function "asked" then do the same for the next element until we cant
		sum = 0;    //find any sizeOfSubArray-length sub arrays
		sum += array[j];
		unstabilizedIndex = j + 1;

		while (unstabilizedIndex <= sizeOfSubArray)
		{
			sum += array[unstabilizedIndex];
			unstabilizedIndex++;
		}

		if (sum > maxSum)//comparing sum of the current sub array with the so far maxSum
			maxSum = sum;
	}
	return maxSum;//returning the maxSum of this "kind" of sub array (1-lentgh,2-length,...)
}