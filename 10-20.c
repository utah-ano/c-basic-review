/*
* Author: @utah
* Date:   2023-10-20
* Subject:������
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�������Ľڵ�����-��ʽ�洢
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;

//�������ڵ���ʺ���
void visit(BiTNode* node) {
	printf("%d ", node->data);
}

//���������������
void PreOrder(BiTree t) {
	if (t != NULL) {
		visit(t);
		PreOrder(t->lchild);
		PreOrder(t->rchild);
	}
}

//���������������
void InOrder(BiTree t) {
	if (t != NULL) {
		InOrder(t->lchild);
		visit(t);
		InOrder(t->rchild);
	}
}

//�������ĺ������
void PostOrder(BiTree t) {
	if (t != NULL) {
		PostOrder(t->lchild);
		PostOrder(t->rchild);
		visit(t);
	}
}

///////////////////////////////////////////////��α���
//��ʽ���нڵ�
typedef struct LinkNode {
	BiTNode* data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;
}LinkQueue;

void levelOrder(BiTree t) {
	LinkQueue q;
	InitQueue(q);
	BiTree p;
	EnQueue(q, t);
	while (!isEmpty(q)) {
		DeQueue(q, p);
		visit(p);
		if (p->lchild != NULL) {
			EnQueue(q, p->lchild);
		}
		if (p->rchild != NULL) {
			EnQueue(q, p->rchild);
		}
	}
}


int main()
{
	// 1-����һ�ſ���
	BiTree root = NULL;

	// 2-�����ڵ�����ڴ棬��������
	root = (BiTree)malloc(sizeof(BiTNode));
	root->data = 1;
	root->lchild = NULL;
	root->rchild = NULL;

	//�����½ڵ�
	BiTNode* p = (BiTNode*)malloc(sizeof(BiTNode));
	p->data = 2;
	p->lchild = NULL;
	p->lchild = NULL;

	root->lchild = p;
	return 0;
}