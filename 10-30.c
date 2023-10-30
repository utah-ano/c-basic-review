/*
* Author: @utah
* Date:   2023-10-30
* Subject:指针
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	// 获得一个变量的地址
	int a = 0;
	printf("%p\n", &a); //打印地址使用%p
	return 0;
}

 
int main() {
	int a = 1010;
	int* p = &a;
	printf("%d\n", *p);  // 输出 1010
}


int main()
{
	int n = 1010;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);    // 000000A5BE4FF974
	printf("%p\n", pc);    // 000000A5BE4FF974
	printf("%p\n", pc + 1);// 000000A5BE4FF975
	printf("%p\n", pi);    // 000000A5BE4FF974
	printf("%p\n", pi + 1);// 000000A5BE4FF978

	return 0;
}


int main() {
	int m = 0;
	m = 20;
	const int a = 10;
	int* p = &a;
	*p = 20;
	printf("a = %d\n", a); // a = 20
	return 0;
}