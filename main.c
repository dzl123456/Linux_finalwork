#include<stdio.h>
#include"queue.h"
#include"stack.h"
int main()
{
    int size=5,i;

    PQUEUE Q;
    CreateQueue(Q,size);//建立一个大小为5的队列
    for(i=0;i<size;i++)
    {
        Enqueue(Q,rand());
    }
    PrintQueue(Q);//打印队列

    PSTACK S;
    CreateStack(S,size);//建立一个大小为5的栈
    for(i=0;i<size;i++)
    {
        PushStack(S,rand());
    }
    PrintStack(S);//打印栈

    return 0;
}
