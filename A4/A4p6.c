#include <stdio.h>

int main() {
	int num;
	
	printf("enter some integer (2~15): ");
	scanf("%d", &num);
	
	if (num > 1 && num < 16) {
		for (int i = num; i > 0; i--) {
			for (int j = 1; j < i; j++) {
				printf(" ");
			}//End of second for
			if (i > 1) {
				printf("*\n");
			} else {
				printf("*");
			}//End of if-else
		}//End of for
	}else {
		printf("Error. Number must be between 2 and 15 inclusive.");
	}
	
	return 0;
}//End of main