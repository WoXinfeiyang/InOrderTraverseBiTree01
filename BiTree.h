#ifndef _BiTree_H
#define _BiTree_H

typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

/*�������������һ����������*/
void CreateBiTree(BiTree*T);
/*����ݹ��㷨����������*/ 
void InorderTraverse1(BiTree T);
/*����ǵݹ��㷨����������*/
void InorderTraverse2(BiTree T);
#endif
