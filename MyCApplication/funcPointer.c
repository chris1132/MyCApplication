#include<stdio.h>
#include<stdlib.h>

//int max(int a,int b) {
//	return a > b ? a : b;
//}
//
//void fun() {
//	int(*p)(int, int) = max;
//
//	int a, b, c, d;
//	printf("a:");
//	scanf_s("%d", &a);
//
//	printf("b:");
//	scanf_s("%d",&b);
//
//	printf("c:");
//	scanf_s("%d", &c);
//
//	d = p(p(a, b), c);
//	printf("d:%d", d);
//}


//有关于size_t:size_t是一种数据类型，近似于无符号整型，但容量范围一般大于int和unsigned。
//这里使用size_t是为了保证arraysize变量能够有足够大的容量来储存可能大的数组
void range_array(int *p,size_t size,int(*getvalue)()) {
	for (size_t i = 0; i < size; i++) {
		p[i] = getvalue();
	}
}
int getvalue() {
	return rand();
}
//
//void main() {
//
//	//fun();
//
//	int array[10];
//	range_array(array, 10, getvalue);
//	for (int i = 0; i < sizeof(array); i++) {
//		printf("%d\n",array[i]);
//	}
//}