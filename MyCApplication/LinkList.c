#include<stdio.h>
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode *next;
}LNode,*linklist;


linklist createH(int n) {
	LNode *h, *p;
	h = (LNode*)malloc(sizeof(LNode));

	for (int i = 0; i < n; i++) {
		p = (LNode*)malloc(sizeof(LNode));
		printf("input the data of list[%d]:", i);
		scanf_s("%d", &(p->data));
		p->next = h->next;
		h->next = p;
	}
	return h;
}

linklist createT(int n) {
	LNode *pre, *h, *p;
	h = (LNode*)malloc(sizeof(LNode));
	pre = h;
	for (int i = 0; i < n; i++) {
		p = (LNode*)malloc(sizeof(LNode));
		printf("input the data of list[%d]:", i);
		scanf_s("%d", &(p->data));
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return h;
}


void main() {
	int n;
	printf("input the size of list:");
	scanf_s("%d", &n);
	linklist node;
	LNode *start;
	//node = createT(n);
	node = createH(n);
	for (start = node->next; start != NULL;start=start->next) {
		printf("%d ",start->data);
	}
}