#include <stdio.h>

void print_Alphabet(char chr)
{
	if (chr >= 97) printf("The entered character is a lower case letter.\n");
	else printf("The entered character is an upper case letter.\n");
}

void print_Digit(char chr)
{
	printf("The entered character is a digit.\n");
}

void print_Character(char chr)
{
	if (chr == 32) printf("The entered character is a space character.\n");
	else if (chr == 9) printf("The entered character is a tab space character.\n");
	else if (chr == 10) printf("The entered character is the return(Enter) character.\n");
	else printf("The given character is not any conventional character.\n");
}

int main()
{
	printf("Enter the character : ");
	char chr;
	scanf("%c", &chr);

	if ((chr >=65 && chr <= 90) || (chr >= 97 && chr <= 112))
	{
		print_Alphabet(chr);
	}
	else if (chr >= 48 && chr <= 57)
	{
		print_Digit(chr);
	}
	else
	{
		print_Character(chr);
	}

	// printf("Character : %c\nASCII : %d", chr, chr);

}