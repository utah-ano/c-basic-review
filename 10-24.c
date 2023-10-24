/*
* Author: @utah
* Date:   2023-10-
* Subject:
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++) {
//		if (b >= 20) {
//			break;
//		}
//		if (b % 3 == 1) {
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//最大公约数
//int main()
//{
//	int a, b, min, i, num;
//	scanf("%d %d", &a, &b);
//	min = a > b ? b : a;
//	for (i = 2; i <= min; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			num = i;
//	}
//	printf("%d", num);
//	return 0;
//}



//素数判断
//_Bool isPrime(int num) {
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			return false; // 含有其他因子
//		}
//	}
//	return true;          // 不含其他因子
//}
//
//
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		if (isPrime(i)) {
//			printf("%d  ", i);
//		}
//	}
// }
//
//
//
//void game() {
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//void menu(){
//	printf("***********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("***********************\n");
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//随机数
//int main()
//{
//	srand(time(NULL));//设置随机数种子
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}


//静态变量可以改变
//int fun(int x) {
//	static int a[3] = { 1,2,3 };
//	int k;
//	for (k = 0; k < 3; k++) {
//		a[k] += a[k] - x;
//		printf("%d", a[k]);
//	}
//	return a[1];
//}
//
//void main() {
//	fun(fun(1));
//}


/*
* 主函数调用fun函数时传入的时a和b的地址，而fun函数里执行的是参数地址互换，
* 因此不会影响a，b的值
*/
void fun(int* a, int* b) {
	int* c;
	c = a;
	a = b;
	b = c;
}

void main() {
	int a = 1;
	int b = 2;
	fun(&a, &b);
	printf("a=%d,b=%d", a, b);
}