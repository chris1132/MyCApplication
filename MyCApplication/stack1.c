#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

//栈的链表实现
typedef struct Node {
	int data;
	struct Node *next;
}Node;
typedef struct Sqstack {
	struct Node *top;
	struct Node *buttom;
}Sqstack;

Sqstack *createStack(){
	Sqstack *stack=malloc(sizeof(Sqstack));
	if (!stack)return NULL;
	stack->buttom = stack->top;
	stack->top = NULL;
	return stack;
}
int push(Sqstack *stack, int data) {
	Node *newNode = (Node*)malloc(sizeof(Node));
	if (!newNode)return false;
	newNode->data = data;
	newNode->next = stack->top;//新加入一个节点后，新结点指向栈顶上的节点
	stack->top = newNode;//新结点成为顶端节点；
	return true;
}

void traverseStack(Sqstack *stack) {
	printf("--------\n");
	if (!isEmptyStack(stack)) {
		Node *node = stack->top;
		while (node->next) {
			printf("%d\n", node->data);
			node = node->next;
		}
	}else {
		printf("null stack\n");
	}
}

void pop(Sqstack *stack) {
	if (!isEmptyStack(stack)) {
		Node *p = stack->top;
		stack->top = p->next;
		p->next = NULL;
	}
}

int isEmptyStack(Sqstack *stack) {
	if (stack->buttom == stack->top) return 1;
	else return 0;
}

void main() {
	Sqstack *stack = createStack();
	if (stack) {
		for (int i = 0; i < 10; i++) {
			if (push(stack, i)) printf("success:%d\n", i);
		}
		
		traverseStack(stack);
		pop(stack);
		traverseStack(stack);
	}
}




