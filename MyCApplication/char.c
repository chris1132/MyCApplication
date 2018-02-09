//#include<stdio.h>
//#include<string.h>
//void main() {
//	char s[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//	printf("s: %s \n", s);
//	
//
//	//复制字符串 s 到字符串 s2。
//	char s2[6];
//	strcpy_s(s2,sizeof(s2), s);
//	printf("s2:%s \n", s2);
//
//	char *s3 = "my name wch,";
//	char *ret = (char*)malloc(strlen(s3) + strlen(s) + 1);
//	//memset把每个数组单元初始化成任何你想要的值
//	memset(ret, 0, sizeof(ret));
//
//	//第二个参数是合并字符串后的字符数量 字符串+'\0'
//	strcat_s(ret,strlen(s3)+1,s3);
//
//	strcat_s(ret, strlen(s3) + strlen(s) + 1, s);
//
//	printf("s:%s \n", ret);
//	int *ch=strstr(ret, "ch");
//	printf("ch:%s \n", ch);
//}