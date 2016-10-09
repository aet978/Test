#include <stdio.h>

int main()
{
	int result = 0;

	for (int i = 1; i <= 50; i++) {
		result = result + (2*i) - 1;
	}

	printf("The result is : %d\n", result);

	return 0;
}