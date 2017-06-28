#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
//建立队列,maxsize为队列大小
void CreateQueue(PQUEUE Q,int size)
{
    Q->pBase=(int *)malloc(sizeof(int)*size);//分配空间
    if(Q->pBase==NULL)//分配不了则退出
    {
        printf("Memory allocation failure");
        exit(0);
    }

    //初始化参数
    Q->prev=0;
    Q->rear=0;
    Q->size=size;
}
//打印队列中的元素
void PrintQueue(PQUEUE Q)
{
    printf("队列元素:\n");

    int i=Q->prev;
    while(i!=Q->rear)
    {
        printf("%d ",Q->pBase[i]);
        i++;
    }
    printf("\n");
}
//判断队列是否已满，留一个预留空间不用
bool FullQueue(PQUEUE Q)
{
    if(Q->rear==Q->size)
        return true;
    else
        return false;
}
//判断队列是否为空
bool EmptyQueue(PQUEUE Q)
{
    if(Q->prev==Q->rear)
        return true;
    else
        return false;
}
//在队列尾添加元素
void Enqueue(PQUEUE Q, int q)
{
    if(FullQueue(Q))
        printf("队列已满\n");
    else
    {
        Q->pBase[Q->rear]=q;
        Q->rear++;
        printf("添加成功\n");
    }
}
//删除最后一个元素
void Dequeue(PQUEUE Q)
{
    if(EmptyQueue(Q))
        printf("队列已空\n");
    else
    {
        Q->rear--;
        printf("删除成功\n");
    }
}
