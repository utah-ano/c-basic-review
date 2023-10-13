#include<stdio.h>
//int main() {
//	int a = -2L;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", 3);
//    printf("%f\n", a / c);
//
//    return 0;
//}

//2023-10-13 编程题：打印3的倍数的数字（1-100）
//void func() {
//    int i,count=0;
//    for (i = 1; i <= 100; i++) {
//        if (!(i % 3)) {
//            count++;
//            printf("%-3d", i);
//            if(!(count%5)) printf("\n");
//        }
//    }
//    printf("一共%d个数字\n",count);
//}

//编程题：从大到小输出（三个整数）
void swap(int* m, int* n)
{
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
}
void func() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
		swap(&a, &b);
	if (a < c)
		swap(&a, &c);
	if (b < c)
		swap(&b, &c);
	printf("从大到小为:%d %d %d\n", a, b, c);
}
int main()
{
	func();
	return 0;
}


