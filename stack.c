#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
//建立栈
void CreateStack(PSTACK S)
{
    S->pBottom=(struct Node *)malloc(sizeof(struct Node));//分配空间
    if(S->pBottom==NULL)//分配不了则退出
    {
        printf("Memory allocation failure");
        exit(0);
    }

    //初始化参数
    S->pTop=S->pBottom;
    S->pTop->data=0;
    S->pTop->pNext=NULL;
}
//打印栈中的元素
void PrintStack(PSTACK S)
{
    printf("栈元素：\n");

    PNODE p=S->pTop;
    while(p!=S->pBottom)
    {
        printf("%d ",p->data);
        p=p->pNext;
    }
    printf("\n");
}
//判断栈是否为空
bool IsEmpty(PSTACK pS)
{
    if (pS->pTop == pS->pBottom)
        return true;
    else
        return false;
}
//清空栈
void ClearStack(PSTACK S)
{
    if(IsEmpty(S))//栈若已为空则返回
        return;
    else
    {
        PNODE p;
        while(S->pTop!=S->pBottom)
        {
            p=S->pTop;
            S->pTop=S->pTop->pNext;
            free(p);
        }
        S->pTop->pNext=NULL;
    }
}
//进栈
void PushStack(PSTACK S,int val)
{
    PNODE p=(struct Node *)malloc(sizeof(struct Node));//建个新结点
    if(p==NULL)//分配不了则退出
    {
        printf("Memory allocation failure");
        exit(0);
    }

    p->data=val;

    //将该结点压入栈
    p->pNext=S->pTop;
    S->pTop=p;
}
//出栈
void PopStack(PSTACK S,PNODE val)
{
    if(IsEmpty(S))
        printf("栈已空\n");
    else
    {
        val=S->pTop;//将结点取出
        S->pTop=S->pTop->pNext;
        printf("删除成功\n");
    }
}
