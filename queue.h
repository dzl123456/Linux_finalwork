#include<stdbool.h>
#ifndef __QUEUE_H_
#define __QUEUE_H_
typedef struct queue//定义存储整形的队列
{
    int *pBase;//队列头
    int prev;//队列第一个元素所在位置（一般为0）
    int rear;//队列最后一个元素的下一个元素所在位置
    int size;//队列的存储空间
}*PQUEUE;

void CreateQueue(PQUEUE Q,int maxsize);
void PrintQueue(PQUEUE Q);
bool FullQueue(PQUEUE Q);
bool EmptyQueue(PQUEUE Q);
bool Enqueue(PQUEUE Q, int val);
bool Dequeue(PQUEUE Q, int *val);
#endif
