#ifndef _BiTree_H
#define _BiTree_H

typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

/*用先序遍历构造一个二叉链表*/
void CreateBiTree(BiTree*T);
/*中序递归算法遍历二叉树*/ 
void InorderTraverse1(BiTree T);
/*中序非递归算法遍历二叉树*/
void InorderTraverse2(BiTree T);
#endif
