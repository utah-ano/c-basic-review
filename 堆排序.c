/*
* Author: @utah
* Date:   2023-12-9
* Subject:堆排序
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 1 大根堆的调整 （下标k为根）
// void headAdjust(原始数组,根下标,数组长度）

void HeadAdjust(int a[],int k,int len) {
	// 保存根节点的值 0号位置用作中转点，排序后的数据从1号位置开始
	a[0] = a[k];

	// 调整为大根堆 2k为左孩子，2k+1为右孩子
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

// 建立大根堆（基于大根堆调整函数）
void CreatMaxHeap(int a[], int len) {
	for (int i = (len / 2); i > 0; i--) {
		HeadAdjust(a, i, len);
	}
}

// 堆排序代码
void HeapSort(int a[], int len) {
	CreatMaxHeap(a, len);
	for (int i = len-1; i > 1; i--) {
		swap(&a[i], &a[1]);
		HeadAdjust(a, 1, i - 1);
	}
}

// 2个辅助函数
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

 
