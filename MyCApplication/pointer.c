//#include<stdio.h>
//#include<time.h>
//const max = 3;
//
//
//void getsecond(unsigned long *p);
//
//int * getnum() {
//
//	//C 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
//	static int n[5] = { 1,2,3,4,5 };
//	return n;
//}
//
//int main() {
//
//	int var[] = { 1,2,3 };
//	/*
//	//指针
//	int *p;
//	p = &var;
//	for (int i = 0; i < max; i++) {
//		printf("%x,%d        ", p, *p);
//		printf("%x,%d\n", p + 1, *(p + 1));
//		p++;
//	}*/
//
//	/*
//	//指针数组
//	int *ptr[3];
//	for (int i = 0; i < max; i++) {
//		ptr[i] = &var[i];
//		printf("%d\n", *ptr[i]);
//	}*/
//
//	//指向指针的指针
//	/*int *p1,**p2;
//	int value = 18;
//	p1 = &value;
//	p2 = &p1;
//	printf("%x,%d\n",p1,*p1);
//	printf("%x,%x\n", p2, *p2);
//	printf("%x,%d\n", p2, **p2);
//	*/
//
//	//传递指针给函数
//	/*long sec;
//	getsecond(&sec);
//	printf("%ld \n",sec);
//	*/
//
//	//从函数返回指针
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
