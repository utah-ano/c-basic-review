/*
* Author: @utah
* Date:   2023-10-
* Subject:
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 1
void func() {
	int a = 1, * p, ** pp;
	pp = &p;
	p = &a;
	a++;
	printf("%d,%d,%d\n", a, *p, **pp);
}

// 2
void func_2() {
	union {
		int k;
		char i[2];
	}*s,a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", s->k);
}
int main()
{
	//func();
	func_2();
	return 0;
}

 
