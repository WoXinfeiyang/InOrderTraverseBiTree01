#include<stdio.h>
#include<malloc.h>
#include"LinkStack.h"
#include"BiTree.h"

/*
typedef struct StackNode
{
	SElemType data;
	struct StackNode*next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack
{
	LinkStackPtr top;
	int length; 
}LinkStack;
*/

/*
函数名称：LinkStackInit(LinkStack*S)
函数参数:S------指向链栈的指针
函数说明： 构造一个不带头结点的空栈S，S->top在此表示指向栈顶元素的指针，
既相当于头结点又相当于单链表中第一个结点，即把栈顶放在单链表的头部 
*/
Bool LinkStackInit(LinkStack*S)
{
	S->top=(LinkStackPtr)malloc(sizeof(StackNode));
	if(!S->top)
	{
		printf("\n链栈构造失败!\n");
		return False;
	}
	/*初始化栈*/
	S->top=NULL;/*将栈初始化为空*/ 
	S->length=0;
	return OK;
}
/*销毁一个链栈S*/
Bool LinkStackDestroy(LinkStack*S)
{
	LinkStackPtr ptarget,pnext;/*定义2个指向链栈结点的指针变量*/
	pnext=S->top;
	while(pnext)
	{
		ptarget=pnext;
		pnext=pnext->next;
		free(ptarget);	
		S->length--;
	}
	if(!S->length)
		return OK;
	else
		return Error;	
}

/*清除一个链栈S*/
Bool LinkStackClear(LinkStack*S)
{
	LinkStackPtr ptarget,pnext;/*定义2个指向链栈结点的指针变量*/
	
	pnext=S->top->next;
	while(pnext)
	{
		ptarget=pnext;
		pnext=pnext->next;
		free(ptarget);	
		S->length--;
	}
	S->top=NULL;
	S->length--;
	if(!S->length)
		return OK;
	else
		return Error;	
	
} 

/*链栈判空*/
Bool LinkStackIsEmpty(LinkStack S)
{
	if(!S.length)
		return True;
	else
		return False;
		
}
/*获取链栈长度*/
int LinkStackLength(LinkStack S)
{
	LinkStackPtr p=S.top;
	int length=0;
	while(p)
	{
		length++;
		p=p->next;	
	}
	return length;
	
	//return S.length;
			
}
/*获取栈顶元素*/
void LinkStackGetTop(LinkStack S,SElemType *e)
{
	if(!S.top)
	{
		printf("\n链栈为空，无法获取栈顶元素!\n");	
	}
	else
	{
		*e=S.top->data;	
	}		
}
/*入栈*/
void LinkStackPush(LinkStack *S,SElemType e)
{
	LinkStackPtr node=(LinkStackPtr)malloc(sizeof(StackNode));
	node->data=e;
		
	node->next=S->top;/*让新节点的后继指向当前栈顶元素*/
	S->top=node;/*把栈顶指针移动到新节点处*/
	
	S->length++;		
}
/*出栈*/
void LinkStackPop(LinkStack *S,SElemType *e)
{
	LinkStackPtr p;
	if(!S->length)
		return;
	p=S->top;
	*e=S->top->data;
	S->top=S->top->next;
	free(p);
	S->length--;	
}
 /*链栈的遍历*/
void LinkStackTraverse(LinkStack S)
{
	if(!S.length)
	{
		printf("\n当前链表为空，无法完成遍历!\n");
		return;	
	}
	else
	{
		LinkStackPtr p=S.top;
		while(p)
		{
			printf("%d ",p->data);
			p=p->next;	
		}
		printf("\n");	
	}	
}
