#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printlist(struct Node *node);
void append(struct Node** head_ref, int new_data);

struct Node {
	int x;
	struct Node *next;
};

int evenFunction(int x) {
    return (x/2);
}

int oddFunction(int x) {
    return ((3*x+1) / 2);
}

void printlist(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->x);
        node = node->next;
    }
}

void append(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;  /* used in step 5*/

    /* 2. put in the data  */
    new_node->x  = new_data;

    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]);
	struct Node *head;
	
	append(&head, a);
	
	printf("Iterated list for %d is:\n", a);
	
	do {
		if (a%2 == 0) {
			a = evenFunction(a);
		}else {
			a = oddFunction(a);
		}
		
		append(&head, a);
		
	} while (a != 1);
	
	printlist(head);
	printf("\nLength of the list:");
	
	return 0;
}