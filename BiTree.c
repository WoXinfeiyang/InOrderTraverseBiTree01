#include<stdio.h>
#include<malloc.h>

#include"BiTree.h"
#include"LinkStack.h"


/*
typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
*/
/*
用先序遍历构造一个二叉链表
*/
void CreateBiTree(BiTree*T)
{
	char value;
	scanf("%c",&value);
	if(value=='#')
	{
		T=NULL;	
	}
	else
	{
		(*T)=(BiTNode*)malloc(sizeof(BiTNode));
		(*T)->data=value;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));	
	}		
}
/*中序递归算法遍历二叉树*/ 
void InorderTraverse1(BiTree T)
{
	if(!T)
	{
		return;	
	}	
	else
	{
		InorderTraverse1(T->lchild);
		printf("%c ",T->data);
		InorderTraverse1(T->rchild);	
	} 
}
/*中序非递归算法遍历二叉树*/
void InorderTraverse2(BiTree T)
{
	
} 
