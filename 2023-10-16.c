#include<stdio.h>

// ����1/1-1/2+1/3......+1/99-1/100
void calculate() {
	int i = 0;
	float sum = 0.0;

	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum -= (1.0 / i);
		}
		else {
			sum += (1.0 / i);
		}
	}

	printf("%f\n", sum);
}

//�����ж�
/*
��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩��
*/
int func(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		//printf("yes\n");
		return 1;
	}
	else {
		//printf("no\n");
		return 0;
	}
}

//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (func(i)) {
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}

// ��ȡһ���������ĸ�λ��
void func(float n) {
	int data = (int)n;
	printf("%d\n", data % 10);
}

//int main() {
//	float a;
//	scanf("%f", &a);
//	func(a);
//	return 0;
//}

//��ȡ4�������ֵ
//#include <stdio.h>
int getMax(int a, int b, int c, int d) {
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	return max;
}
//int main() {
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d\n", getMax(a, b, c, d));
//	return 0;
//}


//��ӡ����