#include <stdio.h>

int main() {
	int num, square;
	
	printf("Enter some integers:\n");
			
	while (scanf("%i", &num) == 1) {
		square = num * num;
			
		printf("The square of %i is %i.\n", num, square);
	}

	return 0;
}