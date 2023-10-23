/*
* Author: @utah
* Date:   2023-10-23
* Subject:c-practice
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


void fun(int n, int* m, int r) {
	n++;
	*m++;
	static int temp = 1;
	temp++;
	r = temp;
}
int main()
{
	int n = 1;
	int m = 1;
	int r = 1;

	fun(n, m, r);
	fun(n, m, r);

	printf("%d %d %d", n, m, r);

	return 0;
}




void swap(int m, int n) {
	int temp;

	temp = m;
	m = n;
	n = temp;
}

void main() {
	int a = 3;
	int b = 5;

	swap(a, b);

	printf("%d,%d", a, b);
}




void main() {
	int a1 = 10;
	int a2 = 3;
	float a3 = 8.0;
	printf("%f\n", a1 / a2 * a3 + a2 / a1 * a3);
	printf("%d\n", a1 / a2 * a3 + a2 / a1 * a3);
}




int a = 2;

int f(int* a) {
	return (*a)++;
}

int main() {
	int s = 0;
	int a = 5;
	s += f(&a);
	s += f(&a);
	printf("%d\n", s);
}
 




int f(int n) {
	static int a = 1;
	n += a++;
	return a;
}

void main() {
	int a = 3;
	int s;
	s = f(a);
	s = s + f(a);
	printf("%d\n", s);
}



void fun(char* q) {
	while(*q != '\0') {
		*q = *q + 2;
		q++;
	}
}

void main() {
	char a[] = "ABC";
	fun(a + 1);
	printf("%s\n", a);
}