#include<stdio.h>


/*C �洢�� 
auto  �����оֲ�����Ĭ�ϵĴ洢�ࡣ
register ���ڶ���洢�ڼĴ����ж�����RAM�еľֲ�����������ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���ʣ����Ҳ��ܶ���Ӧ��һԪ��'&'���������Ϊ��û���ڴ�λ�ã���
static ��static���κ��ڳ�������������ڱ��־ֲ��������ڣ��ȶ�ε��ú��������ڵڶ���֮��ȥ�����ֲ�������������ʼ����ֵ
extern  �����ṩһ��ȫ�ֱ��������ã�ȫ�ֱ��������еĳ����ļ����ǿɼ��� �൱��java��public
*/

//const ������ȥ����һ������������ȥ�ı�һ�������Ĵ洢�࣬�Ѹñ�����ռ���ڴ��Ϊֻ��
const int id = 1;

#define li = 2;

int count;

extern void write();

//ȫ�ֱ���ģʽstatic����
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