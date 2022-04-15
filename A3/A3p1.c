#include <stdio.h>

int main(int argc, char *argv[]) {
	int num, sum = 0;
	
    for (int i = 1; i < argc; i++) {
        sum = sum + atoi(argv[i]);
    }// End of for
			
	while (scanf("%i", &num) == 1) {
		sum = sum + num;
	}
	
	printf("The sum is %d.", sum);

	return 0;
}// End of main