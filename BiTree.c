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
�������������һ����������
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
/*����ݹ��㷨����������*/ 
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
/*����ǵݹ��㷨����������*/
void InorderTraverse2(BiTree T)
{
	
} 
