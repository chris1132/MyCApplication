#include<stdio.h>
#include<stdlib.h>

//栈的数组实现
//用指向数组的指针 通过malloc和realloc对数组的容量进行动态扩容
//#define max_size 20

typedef struct Qstack {
	//int data[max_size];
	int *datas;
	int top;
}Qstack;

int maxsize = 10;
int increaseCap = 8; //定义每次扩容的量 

Qstack* InitStack() {
	Qstack *stack = (Qstack *)malloc(sizeof(Qstack));
	stack->datas = (int *)malloc(maxsize*sizeof(int));
	stack->top = -1;
	return stack;
}

void FullHandle(Qstack *s) {
	if (s->top == maxsize - 1) {
		maxsize = maxsize + increaseCap;
		s->datas = (int *)realloc(s->datas, maxsize * sizeof(int));
	}
}

int isEmpty(Qstack *s) {
	if (s->top == -1) return 1;
	else return 0;
}

void Push(Qstack *s,int data) {
	FullHandle(s);
	s->top++;
	s->datas[s->top] = data;
}
void Pop(Qstack *s) {
	if (!isEmpty(s)) {
		s->datas[s->top] = -1;
		s->top--;
	}
}

void Reserve(Qstack *s) {
	if (!isEmpty(s)) {
		int index = s->top;
		while (index != -1) {
			printf("%d ", s->datas[index]);
			--index;
		}
		printf("\n----------\n");
	}
}

void main() {
	Qstack *s = InitStack();
	printf_s("111 \n----------\n");
	for (int i = 0; i < 24; i++) {
		Push(s,i);
	}
	printf_s("222 \n----------\n");

	Reserve(s);
}