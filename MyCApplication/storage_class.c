#include<stdio.h>


/*C 存储类 
auto  是所有局部变量默认的存储类。
register 用于定义存储在寄存器中而不是RAM中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的'&'运算符（因为它没有内存位置）。
static 用static修饰后，在程序的生命周期内保持局部变量存在，既多次调用函数不会在第二次之后去创建局部变量，给它初始化赋值
extern  用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的 相当于java的public
*/

//const 并不是去定义一个常量，而是去改变一个变量的存储类，把该变量所占的内存变为只读
const int id = 1;

#define li = 2;

int count;

extern void write();

//全局变量模式static修饰
static int num = 8;
void func();

//void main() {
//	/*count = 5;
//	write();*/
//	
//	while (num > 0) {
//		func();
//		num--;
//	}
//}

void func() {
	static int thin = 6;
	thin++;
	printf("thin:%d,num:%d \n", thin, num);

}