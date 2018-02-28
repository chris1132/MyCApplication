#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node* createLinkByT(int n) {
	Node *h, *pre, *f;
	h = (Node*)malloc(sizeof(Node));
	pre = h;
	for (int i = 0; i < n; i++) {
		f = (Node *)malloc(sizeof(Node));
		f->data = rand();
		f->next = NULL;
		pre->next = f;
		pre = f;
	}
	return h;
}
