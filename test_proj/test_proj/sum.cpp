#include <stdio.h>

int main()
{
	int result = 0;

	for (int i = 1; i <= 100; i++) {
		result = result + i;
		printf("%d\n", result);


	}

	printf("The result is : %d\n", result);

	return 0;
}