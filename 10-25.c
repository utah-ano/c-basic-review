/*
* Author: @utah
* Date:   2023-10-25
* Subject:NULL
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main() {
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
 

//int main() {
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//int main() {
//	int a[10];
//	int sz = sizeof(a) / sizeof(a[0]);
//	float sum=0;
//	float result;
//	//数组赋值
//	for (int i = 0; i < sz; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	//遍历数组求和
//	for (int i = 0; i < sz; i++) {
//		sum += a[i];
//	}
//
//	//计算平均值
//	result = sum / sz;
//
//	//输出
//	printf("%f\n", result);
//}
//
//void print(int n);
//
//int main() {
//	/*char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%d\n", sizeof(acX));
//	printf("%d\n", sizeof(acY));
//
//	printf("%d\n", strlen(acX));
//	printf("%d\n", strlen(acY));*/
//
//	print(5);
//	return 0;
//}
//
//void print(int n)
//{
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == 0 || i == n - 1) {
//				printf("* ");
//			}
//			if (j == 0) {
//				printf("* ");
//			}
//			if (j == n - 1) {
//				printf("* ");
//			}
//		}
//		printf("\n");
//	}
//}
//void swap(int a[], int b[],int len) {
//	for (int i = 0; i < len; i++) {
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 6,7,8,9,10 };
//	for (int i = 0; i < 5; i++) {
//		swap(a[i], b[i], 5);
//	}
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//}



#include<stdio.h>
int main()
{
    int arr1[] = { 1,3,5,7,9 };
    int arr2[] = { 2,4,6,8,10 };
    int i = 0;
    int tmp = 0;
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    for (i = 0; i < sz; i++)
    {
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
