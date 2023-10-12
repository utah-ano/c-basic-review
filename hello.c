#include<stdio.h>
#include<string.h>
#define MAX 20
//#include<iostream>
//using namespace std;
////2013 选择题-4 代码
//void c_4() {
//	char c = 'Y';
//	int i = 2, j;
//	j = !c && i++; //短路现象 与运算前面=0之后，运算符后面不再执行
//	cout << "i=" << i << endl;
//	cout << "j=" << j << endl;
//}
////2013 选择题-5 代码
//void c_5() {
//	int x = 3, y = 6, z = 9;
//	if (x > y) z = x; x = y; y = z;
//	cout << "x=" << x << endl;
//	cout << "y=" << y << endl;
//	cout << "z=" << z << endl;
//}
//
////2013 选择题-6 代码
//void c_6() {
//	int x = 10;
//	int count = 0;
//	while (x = 0) {
//		x--;
//		count++;
//	}
//	cout << count << endl;
//}
////2013 c-7
//void c_7() {
//	int x = 5;
//	do {
//		printf("%d", x -= 2);
//	} while (!(--x));
//}
//
////2013程序阅读第一题
//void r_1() {
//	int a;
//	for (a = 0; a < 3; a++) {
//		switch (a) {
//		case 1:
//			cout << "aa\n" << endl;
//		case 2:
//			cout << "bb\n" << endl;
//		default:
//			cout << "cc\n" << endl;
//		}
//	}
//}
//
////2013程序阅读第二题
//void fun1(int* p1, int* p2) {
//	int t;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//void fun2(int x, int y) {
//	int t;
//	t = x;
//	x = y;
//	y = t;
//}
//void test() {
//	int x, y;
//	int* p1, *p2;
//	scanf_s("%d%d", &x, &y);
//	p1 = &x;
//	p2 = &y;
//	if (x < y) fun1(p1, p2);
//	cout << "x=" << x << " " << "y=" << y << endl;
//	if (x > y) fun2(x, y);
//	cout << "x=" << x << " " << "y=" << y << endl;
//}

//2013程序阅读题第三题
void test03() {
	char* ps = "This is Guizhou University";
	int n = 8;
	ps = ps + n;
	printf("%s\n", ps);
}
//2013程序阅读题第四题
void test04() {
	int x[2], i, j, s;
	for (i = 0; i < 2; i++) {
		x[i] = i;
	}
	for (i = 0; i < 10; i++) {
		s = 0;
		for (j = 0; j < 2; j++) {
			s = s + x[j] + i;
		}
	}
	printf("%d\n", s);
}
//2013完善程序第一题
void test05() {
	char s[MAX] = "Hello World!", t[MAX];
	int i;
	for (i = 0; i < MAX; i++) {
		t[i] = s[i];
	}
	printf("%s\n%s\n", s, t);
}

//2013完善程序第二题
//struct node {
//	int data;
//	struct node* next;
//};
//
//
//int main(struct node *head) {
//	struct node* p;
//	int m;
//	p = head->next;
//	m = p->data;
//	for (p = p->next; p != NULL; p = p->next) {
//		if (m>p->data) {
//			m = p->data;
//		}
//	}
//	return m;
//}

//2013程序完善第三题 对节点进行从小到大排序
//typedef struct node {
//	char data;
//	struct node* link;
//}node;
//
//node* select(node* head) {
//	node* p, * q, * r, * s;
//	p = (node*)malloc(sizeof(node));
//	p->link = head;
//	head = p;
//	while (p->link != NULL) {
//		q = q->link;
//		r = p;
//		while () {
//			if (q->link->data < r->link->data) {
//				r = q;
//				q = q->link;
//			}
//		}
//		if () {
//			s = r->link;
//			r->link = s->link;
//			s->link=
//
//		}
//		p = p->link;
//	}
//	p = head;
//	head = head->link;
//	free(p);
//	return head;
//}




////2013应用题-1 编写程序实现阶乘
//int fac(int m) {
//	if (m == 1) {
//		return 1;
//	}
//	else {
//		return m*fac(m - 1);
//	}
//}
//int main() {
//	printf("%d\n", fac(4));
//	return 0;
//}


//int main() {
//	printf("%f", 2.5 + 1 * 7 % 2 / 4);
//}
////取模运算符有限算数运算符

//int main() {
//	int i = '\x80', j = '\200';
//	printf("i=%d,j=%d", i, j);
//	return 0;
//}

//int main() {
//	int x = 'e';
//	printf("%c\n", 'A' + (x - 'a' + 1));
//	return 0;
//}


#include <string.h>
//int main() {
//	int i, j, count=0;
//	for (i = 0, j = 0; (j = 123) && (i < 4); i++) {
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main() {
	printf("%d\n", 11 % 5);
	printf("%d\n", -11 % 5);
	return 0;
}