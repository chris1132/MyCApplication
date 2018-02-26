//将头结点为A的单链表分解成AB，A中奇数，B偶数；
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node *next;
}Node;

void pLink(Node *node);
Node* createLinkByT(int n);
void main() {
	Node *A = createLinkByT(1,10);
	pLink(A);
	Node *B = (Node*)malloc(sizeof(Node));
	Node *p,*n, *q;
	p = A;
	n = A;
	q = B;
	while (n->next) {
		p = n->next;
		if ((p->data % 2)==0) {
			q->next = p;
			n->next = p->next;
			p->next = NULL;
			q = p;
		}else {
			n = n->next;
		}
	}
	pLink(A);
	pLink(B);
}