//#include<stdio.h>
//#include<string.h>
//void main() {
//	char s[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//	printf("s: %s \n", s);
//	
//
//	//�����ַ��� s ���ַ��� s2��
//	char s2[6];
//	strcpy_s(s2,sizeof(s2), s);
//	printf("s2:%s \n", s2);
//
//	char *s3 = "my name wch,";
//	char *ret = (char*)malloc(strlen(s3) + strlen(s) + 1);
//	//memset��ÿ�����鵥Ԫ��ʼ�����κ�����Ҫ��ֵ
//	memset(ret, 0, sizeof(ret));
//
//	//�ڶ��������Ǻϲ��ַ�������ַ����� �ַ���+'\0'
//	strcat_s(ret,strlen(s3)+1,s3);
//
//	strcat_s(ret, strlen(s3) + strlen(s) + 1, s);
//
//	printf("s:%s \n", ret);
//	int *ch=strstr(ret, "ch");
//	printf("ch:%s \n", ch);
//}