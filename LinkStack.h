#ifndef _LinkStack_H
#define _LinkStack_H

#include"BiTree.h"

#define Bool int
#define True (1)
#define False (0) 
#define OK (1)
#define Error (0)

typedef BiTNode SElemType;

typedef struct StackNode
{
	SElemType data;
	struct StackNode*next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack
{
	LinkStackPtr top;
	int length;/*链栈长度*/ 
}LinkStack;

/*构造一个不带头结点的空栈S*/
Bool LinkStackInit(LinkStack*S);
/*销毁一个链栈S*/
Bool LinkStackDestroy(LinkStack*S);
/*清除一个链栈S*/
Bool LinkStackClear(LinkStack*S);
/*链栈判空*/
Bool LinkStackIsEmpty(LinkStack S);
/*获取链栈长度*/
int LinkStackLength(LinkStack S);
/*获取栈顶元素*/
void LinkStackGetTop(LinkStack S,SElemType *e);
/*入栈*/
void LinkStackPush(LinkStack *S,SElemType e);
/*出栈*/
void LinkStackPop(LinkStack *S,SElemType *e); 
 /*链栈的遍历*/
void LinkStackTraverse(LinkStack S);

#endif
