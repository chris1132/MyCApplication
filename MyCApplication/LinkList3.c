//有一个线性表，采用带有头结点的单链表L存储，设计算法将其逆置，要求不建立新结点，只能通过表中已有节点重新组合完成
#include<stdio.h>
typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node* createLinkByT(int n);

void pLink(Node *node);

//void main() {
//	Node *L = createLinkByT(5);
//	pLink(L);
//	Node *q = L->next,*pre;
//	L->next = NULL;
//	while (q) {
//		pre = q->next;
//		q->next = L->next;
//		L->next = q;
//		q = pre;
//	}
//	pLink(L);
//}
