/*
* Author: @utah
* Date:   2023-12-9
* Subject:������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 1 ����ѵĵ��� ���±�kΪ����
// void headAdjust(ԭʼ����,���±�,���鳤�ȣ�

void HeadAdjust(int a[],int k,int len) {
	// ������ڵ��ֵ 0��λ��������ת�㣬���������ݴ�1��λ�ÿ�ʼ
	a[0] = a[k];

	// ����Ϊ����� 2kΪ���ӣ�2k+1Ϊ�Һ���
	for (int i = 2 * k; i <= len; i *= 2) {
		if (a[i] < a[i + 1] && i < len) {
			i++;
		}

		if (a[0] >= a[i]) {
			break;
		}
		else {
			a[k] = a[i];
			k = i;
		}
	}
	a[k] = a[0];
 }

// ��������ѣ����ڴ���ѵ���������
void CreatMaxHeap(int a[], int len) {
	for (int i = (len / 2); i > 0; i--) {
		HeadAdjust(a, i, len);
	}
}

// ���������
void HeapSort(int a[], int len) {
	CreatMaxHeap(a, len);
	for (int i = len-1; i > 1; i--) {
		swap(&a[i], &a[1]);
		HeadAdjust(a, 1, i - 1);
	}
}

// 2����������
void printArr(int a[], int len) {
	for (int i = 1; i < len; i++) {
		printf("%d ", a[i]);
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a[10] = { 8,5,7,4,3,6,2,9,1,10 };
	int len = 10;

	HeapSort(a, len);
	printArr(a,len);

	return 0;
}

 
