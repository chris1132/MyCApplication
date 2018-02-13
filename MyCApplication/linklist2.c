#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *pre, *next;
}Node,*linklist;

linklist createLinkByTail(int n) {
	linklist h, p, l;

	l = (Node*)malloc(sizeof(Node));
	h = l;
	h->data = NULL;
	for (int i = 0; i < n; i++) {
		p = (Node *)malloc(sizeof(Node));
		printf_s("please input the data of the link[%d]:", i);
		scanf_s("%d", &(p->data));

		p->next = NULL;
		h->next = p;
		p->pre = h;
		h = p;
	}
	return l->next;
}

void delLinkByData(linklist node, int delNum) {
	for (linklist start = node; start != NULL; start = start->next) {
		if (start->data == delNum) {
				if (start->next) {
					start->pre->next = start->next;
					start->next->pre = start->pre;
				}
				else {
					start->pre->next = NULL;
				}
		}
	}
}

void printLink(linklist node) {
	while (node) {
		printf("%d ", node->data);
		if (node->pre &&  node->pre->data) {
			printf(" ,it's pre data is :%d \n", node->pre->data);
		}else {
			printf("the head of link \n");
		}
		node = node->next;
	}
}

int getNumRetInt(char* str) {
	int n;
	printf_s(str);
	scanf_s("%d", &n);
	return n;
}

void main() {
	int n = getNumRetInt("please input the size of the link:");
	Node *node = createLinkByTail(n);
	printLink(node);

	int delNum = getNumRetInt("please input the num for del:");
	delLinkByData(node, delNum);
	printLink(node);
}