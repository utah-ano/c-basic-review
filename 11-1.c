/*
* Author: @utah
* Date:   2023-11-1
* Subject:NULL
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// ͳ�����֣���ĸ�������ַ�����
int main()
{
	printf("������ͳ�Ƶ��ַ���\n");
	char str[100];
	gets(str);

	int s1 = 0;
	int s2 = 0;
	int s3 = 0;

	for (int i = 0; str[i]!='\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') { // �����ж�
			s1++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') { // ��ĸ�ж�
			s2++;
		}
		else {
			s3++;
		}
	}
	printf("����=%d\n", s1);
	printf("��ĸ=%d\n", s2);
	printf("����=%d\n", s3);

	return 0;
}

 
