/*
* Author: @utah
* Date:   2023-10-
* Subject:
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//void func_1() {
//	char a[] = "morning", t;
//	int i, j = 0;
//	for (i = 1; i < 7; i++) {
//		if (a[j] < a[i]) {
//			j = i;
//		}
//	}
//	a[7] = a[j];
//	puts(a);
//}




//int main()
//{
//	char a[7] = "abcdef", b[4] = "ABC";
//	strcpy(a, b);
//	printf("%c\n", a[5]);
//	for (int i = 0; i < 7; i++) {
//		printf("%c ", a[i]);
//	}
//	printf("\n");
//
//	puts(a);
//	puts(b);
//	return 0;
//}

 
//int main() {
//	char s[] = "Neusoft";
//	printf("%c\n", *(s + 2));
//}


#include<stdio.h>
#include <malloc.h>
#define maxsize 10
//��̬����
typedef struct
{
	int arr[maxsize];
	int length;
}sqlist;
void initlist(sqlist& l)
{
	l.length = 0;
	for (int i = 0; i < maxsize - 2; i++)
	{
		l.arr[i] = i;
		l.length++;
	}
}
bool insertvalue(sqlist& l, int n, int x)
{
	if (n<1 || n>l.length)
	{
		printf("���ڲ��뷶Χ\n");
		return false;
	}
	if (l.length >= maxsize)
	{
		return false;
	}

	//�Ⱥ�������
	for (int i = l.length; i > n - 1; i--)
	{
		l.arr[i] = l.arr[i - 1];
	}
	//��������
	l.arr[n - 1] = x;
	l.length++;
	return true;

}
bool deletetvalue(sqlist& l, int n, int& e)
{
	if (n<1 || n>l.length)
	{
		printf("����ɾ����Χ\n");
		return false;
	}
	if (0 == l.length)
	{
		return false;
	}
	//ɾ������
	e = l.arr[n - 1];
	l.arr[n - 1] = 0;
	//��������
	for (int i = n - 1; i < l.length - 1; i++)
	{
		l.arr[i] = l.arr[i + 1];
	}

	l.length--;
	return true;

}
//����
int searchByLocation(sqlist l, int value)
{

	for (int i = 0; i < l.length; i++)
	{
		if (value == l.arr[i])
		{
			return i + 1;
		}
	}
	return 0;
}
int searchByValue(sqlist l, int x)
{
	return l.arr[x - 1];
}
int main()
{
	sqlist l;
	int n, x;
	initlist(l);
	/*printf("�������������λ�ü������Ԫ��\n");
	scanf_s("%d %d", &n, &x);
	insertvalue(l, n, x);*/
	int s, e = -1;
	printf("������ɾ����Ԫ��\n");
	while (scanf_s("%d", &s) != EOF)
	{
		if (0 == l.length)
		{
			break;
		}
		deletetvalue(l, s, e);
		printf("�ɹ�ɾ����%dԪ��ֵΪ%d\n", s, e);
		for (int i = 0; i < l.length; i++)
		{
			printf("%d\n", l.arr[i]);
		}
	}




}
////��̬����
//#define initsize 10
//typedef struct
//{
//	int* data;
//	int maxsize;
//	int length;
//}sqlist;
//void increaselen(sqlist& l, int len)
//{
//	int* p = l.data;
//	l.data = (int*)malloc(sizeof(int) * (initsize + len));
//	for (int i = 0; i <initsize; i++)
//	{
//		l.data[i] = p[i];
//	}
//	l.maxsize = initsize + len;
//	free(p);
//}
//int main()
//{
//	sqlist* l;
//	l->data= (int*)malloc(sizeof(int) * initsize);
//}