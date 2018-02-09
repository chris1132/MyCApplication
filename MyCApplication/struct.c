#include<stdio.h>
struct Student {
	char name[10];
	int age;
	int grade;
}student;

void main() {

	struct Student stu;
	strcpy(stu.name,"wch");
	stu.age = 18;
	stu.grade = 100;
	printf("%d \n", stu.age);
}