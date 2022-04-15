#include <stdio.h>
#include "mySource.h"
#include "mySource.c"

int main(int argc, char *argv[]) {
	int length = atoi(argv[1]);
	
	char *myarr;
	myarr=(char*)malloc(length*sizeof(char));

	printf("Original array:\n");
	generateChars(myarr, length);
	printChars(myarr, length);
	
	printf("\n");
	
	printf("Reversed array:\n");
	revOffsetChars(myarr, length);
	printChars(myarr, length);
	
	return 0;
}