/*
* Author: @utah
* Date:   2023-11-2
* Subject:NULL
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int sum;
	for (sum = 0, i = 7; i >= 4; i--) {
		switch (i) {
		case 4:
		case 6:
			sum += 2;
			break;
		case 5:
		case 7:
			sum += 1;
			break;
		}
	}
	printf("%d\n", sum);
	return 0;
}

 
void main() {
	int a[10];
	int max;
	int min;
	float avg;
	//数组赋值
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	avg = max = min = a[0];

	//找出最值，求和
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		else if (min > a[i]) {
			min = a[i];
		}
		avg += a[i];
	}
	avg = avg - (max + min);
	avg = avg / 8.0;
	printf("%d\n", avg);
}


void main() {
	int x = 1;
	int y = 0;
	int a = 0;
	int b = 0;

	switch (x) {
	case 1:
		switch (y) {
		case 0:
			a++;
			break;
		case 1:
			b++;
			break; 

		}
	case 2:
		a++;
		b++;
		break;
	case 3:
		a++;
		b++;
	}
	printf("%d,%d", a, b);
}


void main() {
	char s[80];
	char c = 'a';

	int i = 0;
	scanf("%s", &s);

	while (s[i] != '\0') {
		if (s[i] >= c) {
			s[i] = s[i] - 32;
		}
		else if (s[i] >= c - 32) {
			s[i] = s[i] + 32;
			i++;
		}
	}

	puts(s);
	return 0;
}

 //合并两个有序数组
void main() {
	int a[4] = { 2,3,5,7 };
	int b[6] = { 1,4,8,16,32,64 };
	int c[10];

	int p = 3;
	int q = 5;
	int i;

	for (i = 0; i < 10; i++) {
		if (a[p]>b[q]) {
			c[i] = a[p];
			p--;
		}
		else {
			c[i] = b[q];
			q--;
		}
		printf("%d ", c[i]);
	}
}


void main() {
	int x = 1;
	int y = 0;
	if (!x) {
		y++;
	}
	else if (x == 0) {
		if (x) {
			y += 5;
		}
		else {
			y += 6;
		}
	}
}