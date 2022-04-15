#include <stdio.h>

int main(int argc, char *argv[]) {
	int command = atoi(argv[1]);
	int width = 1, height = 1, area = 1, count1 = 1, count2 = 0;
		
	do {
		width = rand()%96 + 5;
		height = rand()%96 + 5;
		area = width * height;
		
		if (area >= 2022) {
			printf("Large random rectangle %d:\n", count1);
			printf("width: %d; height: %d; area: %d.\n", width, height, area);
			count1++;
		}else {
			count2++;
		}//End of if-else
	}while (count1 <= command);
		
	printf("Number of discarded small rectangles is %d.", count2);
		
}//End of main
