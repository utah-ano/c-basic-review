/*
* Author: @utah
* Date:   2023-11-1
* Subject:NULL
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 统计数字，字母及其他字符个数
int main()
{
	printf("输入想统计的字符串\n");
	char str[100];
	gets(str);

	int s1 = 0;
	int s2 = 0;
	int s3 = 0;

	for (int i = 0; str[i]!='\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') { // 数字判断
			s1++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') { // 字母判断
			s2++;
		}
		else {
			s3++;
		}
	}
	printf("数字=%d\n", s1);
	printf("字母=%d\n", s2);
	printf("其他=%d\n", s3);

	return 0;
}

 
