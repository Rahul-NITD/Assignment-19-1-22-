#include <stdio.h>

int main()
{
	int h;
	printf("Enter the height of the pattern : ");
	scanf("%d", &h);

	for (int i = 1; i <= h; i++)
	{
		for (int k = h-i; k >= 0; k--)
		{
			printf("  ");
		}
		for (int j = i; j < 2*i; j++)
		{
			printf("%d ", j);
		}
		for (int j = 2*(i-1); j >= i; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}