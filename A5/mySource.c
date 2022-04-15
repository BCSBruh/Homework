#include <stdio.h>
#include "mySource.h"

void generateChars(char *myarr, int len) {
	//include 97-122 ascii table
	for (int i = 0; i < len; i++){
		char c = rand()%25 + 97;
		myarr[i] = c;
	}
}

void revOffsetChars(char *myarr, int len) {
	
	for (int i = 0; i <= len; i++) {
		char variable = myarr[i];
		if (variable == 'a') {
			variable = 'z';
		}else {
			variable = variable - 1;
		}
		
		myarr[i] = variable;
	}
}

void printChars(char *myarr, int len) {	
	for(int i = 0; i < len; i++) {
        printf("%c", myarr[i]);
    }
}