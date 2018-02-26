#include<stdio.h>
typedef struct Node {
	int data;
	struct Node *next;
}Node;

void pLink(Node *node) {
	while (node->next) {
		node = node->next;
		printf("%d\n", node->data);
	}
	printf("------\n");
}