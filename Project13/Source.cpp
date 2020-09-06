#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char character;
	scanf("%c", &character);
	if (character >= 'a' && character <= 'z')
	{
		printf("%c is CONSONANT", character);
	}
	else if (character >= 'A' && character <= 'Z')
	{
		printf("%c is VOWEL", character);
	}
	else
	{
		printf("Error!");
	}
	


}