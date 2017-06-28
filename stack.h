#include<stdbool.h>
#ifndef __STACK_H_
#define __STACK_H_
typedef int elementype;
//定义存储整形的结点
typedef struct Node
{
    int data;
    struct Node *pNext;
}*PNODE;
//定义存储整形的栈
typedef struct stack
{
    PNODE pTop; //栈顶指针
    PNODE pBottom;//栈底指针
}*PSTACK;
void CreateStack(PSTACK S);
void PushStack(PSTACK S,int val);
bool PopStack(PSTACK S,PNODE val);
void PrintStack(PSTACK S);
void ClearStack(PSTACK S);
#endif
