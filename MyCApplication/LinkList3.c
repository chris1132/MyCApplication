//��һ�����Ա����ô���ͷ���ĵ�����L�洢������㷨�������ã�Ҫ�󲻽����½�㣬ֻ��ͨ���������нڵ�����������
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
