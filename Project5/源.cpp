#include <stdio.h>
#include <string.h>
#include <wchar.h>
int main() {
	//char* str1 = "你sb";
	//不知道为什么都是错的char* str0 = "zhang";
		char str2[100]="abc";//这种定义更简单
		char str3[5] = { 'a','b','c' ,'\0' };
		char str4[100] = "I love you";
		int length = strlen(str2);
		double loui = strlen(str3);
		printf("为了让你保持书写中文的习惯\n");
		printf("str3和str4的长度：");
		printf("%d\n", length);//答案是3，不是4；
		printf("%llf\n", loui);//同上
		/*strcat_s(str2, str3);
		printf("看看拼接的字符str2:");
		printf("%s", str2);*///要注意空间大小
		strcpy_s(str2, str3);//同样也要注意空间
		printf("%s", str2);
		int b= strcmp(str2, str3);//strcmp完全一样是0，不一样是非0
		int y = strcmp(str3, str4);
		printf("%d %d\n", b, y);
		_strlwr_s(str4);//注意_strlwr和_strupr的用法
		printf("%s\n", str4);
		_strupr_s(str4);
		printf("%s", str4);
		
		//完成一道题目

}