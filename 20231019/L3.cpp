#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head)
{
	NODE* p = head;

	while (p->next != NULL) {
		p = p->next;
		printf("%d", p->data);
	}
}

void insert_node_first(NODE* head, int data)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;

	new_node->next = head->next;
	head->next = new_node;
}



void insert_node(NODE* head, int data)
{
	NODE* new_NODE = (NODE*)malloc(sizeof(NODE));
	new_NODE->data = data;
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = new_NODE;
	new_NODE->next = NULL;
}

void delete_node_first(NODE* head)
{
	NODE* p = head->next->next;
	free(head->next);
	head->next = p;
}

void delete_node_last(NODE* head)
{
	NODE* p_prev=0;
	NODE* p = head;
	while (p->next != NULL) {
		p_prev = p;
		p = p->next;
	}
	free(p);
	p_prev->next = NULL;
}

int main(void)
{
	NODE* head;
	head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;  // (*head).next = NULL;

	NODE* n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = NULL;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n2->next = NULL;
	n1->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 3;
	n3->next = NULL;
	n2->next = n3;

	insert_node(head, 4);
	insert_node(head, 5);


	insert_node_first(head, 0);

	delete_node_first(head);

	delete_node_last(head);

	print_list(head);
}