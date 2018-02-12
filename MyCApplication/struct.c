#include<stdio.h>
struct Student {
	char name[10];
	int age;
	int grade;
}student,*stu3;

void print_void(struct Student stu) {
	printf("%d \n", stu.age);
}
void print_d(struct Student *stu2) {
	printf("%s \n",stu2->name);
}
//void main() {
//
//	struct Student stu;
//	strcpy(stu.name,"wch");
//	stu.age = 18;
//	stu.grade = 100;
//	print_void(stu);
//
//	strcpy(student.name, "chovy");
//	print_d(&student);
//	
//	stu3->grade = 98;
//	printf("%d \n", stu3->grade);
//}

