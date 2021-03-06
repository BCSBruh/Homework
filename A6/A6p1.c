#include <stdio.h>
#include <stdlib.h>

struct Student {
	char name[24]; 
	int takenCredits;
};

int main(int argc, char *argv[]) {
	struct Student *stdntptr, temp;
	int i, j, numberOfStudents;
	
	printf("How many students do you want to input?\n");
	scanf("%d", &numberOfStudents);
	
	stdntptr = (struct Student*) malloc(numberOfStudents * sizeof(struct Student));
	
	//Store names and credits
	for (i = 0; i < numberOfStudents; i++) {
		printf("Please input information for student %d:\nname? ", (i+1));
		scanf("%s", (stdntptr + i) -> name);
		printf("taken credits? ");
		scanf("%d", &(stdntptr + i) -> takenCredits);
		printf("\n");
	}
	
	//Sort the names by alphabetical order
	for (i = 0; i < numberOfStudents; i++) {
		for (j = i+1; j <= numberOfStudents; j++) {
			if (strcmp(stdntptr[i].name, stdntptr[j].name)>0) {
				temp = stdntptr[i];
				stdntptr[i] = stdntptr[j];
				stdntptr[j] = temp;
			}
		}
	}
	
	//Print out names
	printf("Printing student information by name order:\n");
	for(i = 1; i <= numberOfStudents; i++) {
		printf("name: %s\ttaken credits: %d\n", stdntptr[i].name, stdntptr[i].takenCredits);
	}

		
	//Sort the names by credit order
	for (i = 0; i <= numberOfStudents; i++) {
		for (j = i+1; j <= numberOfStudents; j++) {
			if (stdntptr[i].takenCredits > stdntptr[j].takenCredits) {
				temp = stdntptr[i];
				stdntptr[i] = stdntptr[j];
				stdntptr[j] = temp;
			}
		}
	}
	
	//Print out names
	printf("\nPrinting student information by credits order:\n");
	for(i = 1; i <= numberOfStudents; i++) {
		printf("name: %s\ttaken credits: %d\n", stdntptr[i].name, stdntptr[i].takenCredits);
	}
	
	return 0;
}