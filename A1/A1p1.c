#include <stdio.h>

int main() {
	int n = 15;
	
	for (int i = 1; i <= n; i++) {
		printf("hello");
		
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}/*end of for loop*/
		
		printf("world");
		
		if (i % 2 == 0) {
			printf("!\n");
		} else {
			printf("\n");
		}/*end of if-else*/
	}/* end of for loop */
	
	return 0;
}/* end of main */