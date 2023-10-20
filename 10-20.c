/*
* Author: @utah
* Date:   2023-10-20
* Subject:二叉树
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//二叉树的节点描述-链式存储
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;

//二叉树节点访问函数
void visit(BiTNode* node) {
	printf("%d ", node->data);
}

//二叉树的先序遍历
void PreOrder(BiTree t) {
	if (t != NULL) {
		visit(t);
		PreOrder(t->lchild);
		PreOrder(t->rchild);
	}
}

//二叉树的中序遍历
void InOrder(BiTree t) {
	if (t != NULL) {
		InOrder(t->lchild);
		visit(t);
		InOrder(t->rchild);
	}
}

//二叉树的后序遍历
void PostOrder(BiTree t) {
	if (t != NULL) {
		PostOrder(t->lchild);
		PostOrder(t->rchild);
		visit(t);
	}
}

///////////////////////////////////////////////层次遍历
//链式队列节点
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
	// 1-定义一颗空树
	BiTree root = NULL;

	// 2-给根节点分配内存，插入数据
	root = (BiTree)malloc(sizeof(BiTNode));
	root->data = 1;
	root->lchild = NULL;
	root->rchild = NULL;

	//插入新节点
	BiTNode* p = (BiTNode*)malloc(sizeof(BiTNode));
	p->data = 2;
	p->lchild = NULL;
	p->lchild = NULL;

	root->lchild = p;
	return 0;
}