/*
* Author: @utah
* Date:   2023-10-31
* Subject:NULL
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int a = 3;
	int b = 2;
	int c = 1;
	c = 5 ? a++ : b--; // 赋值运算符优先级最低 c=a++;
	printf("%d\n", c);
	return 0;
}








 
