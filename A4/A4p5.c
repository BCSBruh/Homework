#include <stdio.h>

int main() {
	//For loop for each pattern 00, 01, 10, 11 (In this order)
	
	for (int i = 0; i < 4; i++) {
		printf("%d\t%d\n", 0, 0); 
		
		if (i==0) {
			printf("%d\t%d\n\n", 0, 0);
		} else if (i == 1) {
			printf("%d\t%d\n\n", 0, 1);
		} else if (i == 2) {
			printf("%d\t%d\n\n", 1, 0);
		} else {
			printf("%d\t%d\n\n", 1, 1);
		}//End elif
	}//End of for
	
	for (int i = 0; i < 4; i++) {
		printf("%d\t%d\n", 0, 1); 
		
		if (i==0) {
			printf("%d\t%d\n\n", 0, 0);
		} else if (i == 1) {
			printf("%d\t%d\n\n", 0, 1);
		} else if (i == 2) {
			printf("%d\t%d\n\n", 1, 0);
		} else {
			printf("%d\t%d\n\n", 1, 1);
		}//End elif
	}//End of for
	
	for (int i = 0; i < 4; i++) {
		printf("%d\t%d\n", 1, 0); 
		
		if (i==0) {
			printf("%d\t%d\n\n", 0, 0);
		} else if (i == 1) {
			printf("%d\t%d\n\n", 0, 1);
		} else if (i == 2) {
			printf("%d\t%d\n\n", 1, 0);
		} else {
			printf("%d\t%d\n\n", 1, 1);
		}//End elif
	}//End of for
	
	for (int i = 0; i < 4; i++) {
		printf("%d\t%d\n",1, 1); 
		
		if (i==0) {
			printf("%d\t%d\n\n", 0, 0);
		} else if (i == 1) {
			printf("%d\t%d\n\n", 0, 1);
		} else if (i == 2) {
			printf("%d\t%d\n\n", 1, 0);
		} else {
			printf("%d\t%d\n\n", 1, 1);
		}//End elif
	}//End of for
	
	return 0;
}// End of main