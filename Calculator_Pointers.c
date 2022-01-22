#include <stdio.h>

float add(float *num1, float *num2)
{
	return (*(num1) + *(num2));
}

float sub(float *num1, float *num2)
{
	return (*(num1) - *(num2));
}

float mul(float *num1, float *num2)
{
	return (*(num1) * *(num2));
}

float div(float *num1, float *num2)
{
	return (*(num1) / *(num2));
}

float mod(float *num1, float *num2)
{
	return ((int)*(num1) % (int)*(num2));
}

int main()
{
	printf("Enter the expression (eg. 45*81) : ");
	float num1, num2;
	scanf("%f",&num1);
	char operator;
	scanf(" %c", &operator);
	scanf("%f", &num2);

	float res;
	switch(operator)
	{
		case '+':
			res = add(&num1, &num2);
			break;
		case '-':
			res = sub(&num1, &num2);
			break;
		case '*':
			res = mul(&num1, &num2);
			break;
		case '/':
			if (num2 != 0)
				res = div(&num1, &num2);
			else
			{
				printf("Cannot divide by 0.\n");
				return 0;
			}
			break;
		case '%':
			res = mod(&num1, &num2);
			break;
		default :
			printf("Invalid Operator.");
			return 0;

	}

	printf("Result : %f", res);

}
