#include <stdio.h>

int main()
{
	printf("Enter the width of the pattern : ");
	int w;
	scanf("%d", &w);

	for (int i = 0; i < w; i++)
	{
		for (int k = w-i; k > 0; k--)
		{
			printf("  ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i < w; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			printf("  ");
		}
		for (int j = w-i; j > 0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}

}