#include<stdio.h>

//�����-1
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 30;
	case 2:
		b = 20;
	case 3:
		b = 16;
	default:
		b = 0;
	}
	return b;
}

//�ڶ���
void demo_2()
{
	int x = 3;
	int y = 3;
	switch (x % 2)
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default:
			printf("hello");
		}
	case 2:
		printf("third");
	}
}

//������
void juge(int a, int b, int c)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		if (a != b && a != c && b != c) {
			printf("Ordinary triangle!\n");
		}
		else if (a == b && a == c && b == c) {
			printf("Equilateral triangle!\n");
		}
		else {
			printf("Isosceles triangle!\n");
		}
	}
	else
	{
		printf("Not a triangle!\n");
	}
}

//������ ��ӡ99�˷���
void multTable() {
	int i;
	int j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%-d * %-d = %-2d ", j, i, j * i);
		}
		printf("\n");
	}
}

//������ ��10���������ֵ
int getMax() {
	static int a[10];
	static int max;

	//������洢��������
	for (int i = 0; i < 10; i++) {
		printf("������a[%d]��ֵ\n",i);
		scanf_s("%d", &a[i]);
	}

	//�ҳ����ֵ
	max = a[0];
	for (int j = 1; j < 10; j++) {
		if (max < a[j]) {
			max = a[j];
		}
	}
	return max;
}

//������ ��9�ĸ�����1-100��
void count() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("%d\n", count);
}
int main()
{
	/*printf("%d\n", func(1));*/
	//demo_2();
	//multTable();
	//printf("max is %d\n", getMax());
	count();
	return 0;
}