#include <stdio.h>
#include <stdlib.h>
#include"LinkStack.h"
#include"BiTree.h"
/*
文件名称：链栈的基本操作
时间：2014-1-26 17:54
说明： 链栈的基本操作
*/ 


int main(int argc, char *argv[]) 
{
	
	BiTree tree;
	CreateBiTree(&tree);
	InorderTraverse1(tree);
	/*
	LinkStack S;
	SElemType a;
	int i=0;
	if(LinkStackInit(&S)==OK)
	{
		printf("\n当前栈的长度为:%d\n",LinkStackLength(S));	
	}
	
	for(i=0;i<10;i++)
		LinkStackPush(&S,i);
	printf("\n当前栈的长度为:%d\n",LinkStackLength(S));
	printf("\n当前的栈序列为:\n");
	LinkStackTraverse(S);
	
	LinkStackGetTop(S,&a);
	printf("a=%d\n",a);
	
	LinkStackPop(&S,&a);
	
	printf("\n当前栈的长度为:%d\n",LinkStackLength(S));
	printf("\n当前的栈序列为:\n");
	LinkStackTraverse(S);
	printf("a=%d\n",a);	
	
	LinkStackClear(&S);
	printf("\n当前栈的长度为:%d\n",LinkStackLength(S));
	printf("\n当前的栈序列为:\n");
	LinkStackTraverse(S);	
	 */
	return 0;
}
