/*
des:
查找单链表倒数k个位置的结点
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node* createLinkByT(int n);

void pLink(Node *node);
//void findElem(Node *L, int k);

void main() {
	Node *L = createLinkByT(10);
	pLink(L);
	Node *head = L->next;
	Node *p = L->next;
	int i = 1;
	while (p) {
		p = p->next;
		++i;
		if (i >= 4) {
			head = head->next;
		}
	}
	if (head != L->next) {
		printf("%d", head->data);
	}
	
}

//void findElem(Node *L, int k){
//	Node *head = L->next;
//	Node *p = L->next;
//	int i = 1;
//	while (p) {
//		p = p->next;
//		++i;
//		if (i >= k) {
//			head = head->next;
//		}
//	}
//	if (head != L->next) {
//		printf("%d", head->data);
//	}
//}