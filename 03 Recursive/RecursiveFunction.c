#include <stdio.h>

int Factorial(int num)
{
	int result = 0;
	if (num <= 1)
	{
		result = 1;
	}
	else
	{
		result = num * Factorial(num - 1);
	}
	
	return result;
}

int main(int argc, char *argv[]) {
	int result1;
	int result2;

	result1 = Factorial(2);
	result2 = Factorial(3);

	printf("2! factorial is %d\n", result1);
	printf("3! factorial is %d\n", result2);

	return 0;
}


