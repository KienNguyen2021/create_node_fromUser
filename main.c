#include <stdio.h>
#include <stdlib.h>

// structure to create a linked list

typedef struct node {
	int data;
	struct node *next;
}node;

// let us write a function to create a linked list
// return the starting address of the first NODE, so functio :

node * createLinkedList(int n);   // 1 parameter, n = number of node created

// a function to display the linked list

void displayList(node * head);


int main()
{

	int n = 0;
	node *HEAD = NULL;
	printf ("\n How many nodes :");
	scanf("%d", &n);
	HEAD = createLinkedList(n);
  displayList(HEAD);

	
	return 0;
}

node * createLinkedList(int n)

{
	int i = 0;
	node *head = NULL;
	node *temp = NULL;
	node *p = NULL;

	for (i = 0; i < n; i++)
	{
		// let us create individual node - a new NODE
		temp = (node*)malloc(sizeof(node));
		printf("\nEnter data for node number :", i +1);
		scanf("%d", &(temp->data));
		temp->next = NULL;

		// Check each element of loop

	  	if (head == NULL) // if list is currently empty, then make temp as first node
		    {
		    	head = temp;
	    	}

	  	else
	  	{
		  	  p = head;
		    	while (p->next != NULL)
			  	p = p->next;
			  p->next = temp;
		  }



	}
	return head;
}

void displayList(node *head)
{
	node *p = head;
	while (p != NULL)
	{
		printf("\t %d->", p->data);
		p = p->next;             // the loop breaks here

	}
}