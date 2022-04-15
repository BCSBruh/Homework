#include <stdio.h>

int main() {
	int min = 33;
	int max = 126;
	
	for(int i = min; i <= max; i++) {
		char c = i;
		printf("%c\tASCII value:%d\n", c, i);
	}//End of for
	
	return 0;
}//End of main