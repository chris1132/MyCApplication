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


//�й���size_t:size_t��һ���������ͣ��������޷������ͣ���������Χһ�����int��unsigned��
//����ʹ��size_t��Ϊ�˱�֤arraysize�����ܹ����㹻���������������ܴ������
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