//#include<stdio.h>
//#include<time.h>
//const max = 3;
//
//
//void getsecond(unsigned long *p);
//
//int * getnum() {
//
//	//C ��֧���ں����ⷵ�ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊ static ������
//	static int n[5] = { 1,2,3,4,5 };
//	return n;
//}
//
//int main() {
//
//	int var[] = { 1,2,3 };
//	/*
//	//ָ��
//	int *p;
//	p = &var;
//	for (int i = 0; i < max; i++) {
//		printf("%x,%d        ", p, *p);
//		printf("%x,%d\n", p + 1, *(p + 1));
//		p++;
//	}*/
//
//	/*
//	//ָ������
//	int *ptr[3];
//	for (int i = 0; i < max; i++) {
//		ptr[i] = &var[i];
//		printf("%d\n", *ptr[i]);
//	}*/
//
//	//ָ��ָ���ָ��
//	/*int *p1,**p2;
//	int value = 18;
//	p1 = &value;
//	p2 = &p1;
//	printf("%x,%d\n",p1,*p1);
//	printf("%x,%x\n", p2, *p2);
//	printf("%x,%d\n", p2, **p2);
//	*/
//
//	//����ָ�������
//	/*long sec;
//	getsecond(&sec);
//	printf("%ld \n",sec);
//	*/
//
//	//�Ӻ�������ָ��
//	/*int *p;
//	p = getnum();
//	for (int i = 0; i < 5; i++) {
//		printf("%d : %d \n", i, *(p+i));
//	}*/
//
//	return 0;
//}
//
//void getsecond(long *p) {
//	*p = time(NULL);
//	return;
//}
