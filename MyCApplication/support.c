#include<stdio.h>

//extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的
//可以在其他文件中使用 extern 来得到已定义的变量或函数的引用
extern int count;

void write() {
	printf("count:%d", count);
	printf("\n");
}