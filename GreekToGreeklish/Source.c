#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#define STRING_SIZE 1000

int main(void)
{
	char character,i = 0, sentence[STRING_SIZE];

	fgets(sentence, 1000, stdin);
	while (sentence[i] != '\0')
	{
		if (checkCase(sentence[i]) || checkHighlightedCharacters(sentence[i]))
			greekTogreeklishLowerCase(sentence, i);
		else
			greekTogreeklishUpperCase(sentence, i);

		i++;
	}
	printf("%s", sentence);
	return 0;
}



