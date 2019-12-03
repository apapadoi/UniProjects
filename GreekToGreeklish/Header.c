#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"

void greekTogreeklishLowerCase(char string[],int index)
{
	int i = index;

		if (string[i] == -104 || string[i]==-31)
			string[i] = 97;
		else if (string[i] == -103)
			string[i] = 98;
		else if (string[i] == -102)
			string[i] = 'g';
		else if (string[i] == -101)
			string[i] = 100;
		else if (string[i] == -100 || string[i]==-30)
			string[i] = 101;
		else if (string[i] == -99)
			string[i] = 'z';
		else if (string[i] == -98|| string[i]==-29)
			string[i] = 'h';
		else if (string[i] == -97)
		{
			moveArrayCharacter(string, i);
			string[i] = 't';
			string[i + 1] = 'h';
		}
		else if (string[i] == -96 || string[i]==-28 || string[i]==-27)
			string[i] = 'i';
		else if (string[i] == -95)
			string[i] = 'k';
		else if (string[i] == -94)
			string[i] = 'l';
		else if (string[i] == -93)
			string[i] = 'm';
		else if (string[i] == -92)
			string[i] = 'n';
		else if (string[i] == -91)
		{
			moveArrayCharacter(string, i);
			string[i] = 'k';
			string[i + 1] = 's';
		}
		else if (string[i] == -90 || string[i]== -26)
			string[i] = 'o';
		else if (string[i] == -89)
			string[i] = 'p';
		else if (string[i] == -88)
			string[i] = 'r';
		else if (string[i] == -87)
			string[i] = 's';
		else if (string[i] == -86)
			string[i] = 's';
		else if (string[i] == -85)
			string[i] = 't';
		else if (string[i] == -84 || string[i]==-25 || string[i]==-24)
			string[i] = 'u';
		else if (string[i] == -83)
			string[i] = 'f';
		else if (string[i] == -82)
			string[i] = 'x';
		else if (string[i] == -81)
		{
			moveArrayCharacter(string, i);
			string[i] = 'p';
			string[i + 1] = 's';
		}
		else if (string[i] == -32 || string[i]==-23)
			string[i] = 'w';
}

char checkCase(char element)
{
	if ((element >= -104 && element <= -81) || (element == -32))
		return 1;//assume 1 lowercase
	return 0;//assume 0 uppercase
}

void moveArrayCharacter(char string[], int start)
{
	int i = start, temp = string[start];
	while (string[i] != '\0')
	{
		swap(&temp, &string[i + 1]);
		i++;
	}
	swap(&temp, &string[i + 1]);
	swap(&temp, &string[i + 2]);
}

void swap(char* pointer1, char* pointer2)
{
	int t = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = t;
}

void greekTogreeklishUpperCase(char string[],int index)
{
		int i = index;

		if (string[i] == -128 || string[i]==-22)
			string[i] = 'A';
		else if (string[i] == -127)
			string[i] = 'B';
		else if (string[i] == -126)
			string[i] = 'G';
		else if (string[i] == -125)
			string[i] = 'D';
		else if (string[i] == -124 || string[i]== -21)
			string[i] = 'E';
		else if (string[i] == -123)
			string[i] = 'Z';
		else if (string[i] == -122 || string[i]== -20)
			string[i] = 'H';
		else if (string[i] == -121)
		{
			moveArrayCharacter(string, i);
			string[i] = 'T';
			string[i + 1] = 'h';
		}
		else if (string[i] == -120 || string[i]== -19)
			string[i] = 'I';
		else if (string[i] == -119)
			string[i] = 'K';
		else if (string[i] == -118)
			string[i] = 'L';
		else if (string[i] == -117)
			string[i] = 'M';
		else if (string[i] == -116)
			string[i] = 'N';
		else if (string[i] == -115)
		{
			moveArrayCharacter(string, i);
			string[i] = 'K';
			string[i + 1] = 's';
		}
		else if (string[i] == -114 || string[i]== -18)
			string[i] = 'O';
		else if (string[i] == -113)
			string[i] = 'P';
		else if (string[i] == -112)
			string[i] = 'R';
		else if (string[i] == -111)
			string[i] = 'S';
		else if (string[i] == -110)
			string[i] = 'T';
		else if (string[i] == -109 || string[i]==-17)
			string[i] = 'U';
		else if (string[i] == -108)
			string[i] = 'F';
		else if (string[i] == -107)
			string[i] = 'X';
		else if (string[i] == -106)
		{
			moveArrayCharacter(string, i);
			string[i] = 'P';
			string[i + 1] = 's';
		}
		else if (string[i] == -105 || string[i]==-16)
			string[i] = 'W';
}

char checkHighlightedCharacters(char element)
{
	if (element >= -31 && element <= -23)
		return 1;//assume 1 highlighted and lowercase

	return 0;//assume 0 not hightlighted and lowercase
}