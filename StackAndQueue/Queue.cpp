#include "Basic.h"
//循环队列创建
int isFull(SqQueue sq){
if ((sq.rear+1)%maxSize==sq.front)
{
    return 1;
}
return 0;
}
int isEmpty(SqQueue sq){
    if (sq.front==sq.rear)
    {
        return 1;
    }
    return 0;
}
void initQueue(SqQueue &qu){
    qu.front=qu.rear=0;
}
int enQueue(SqQueue &qu,int x){
    if (!isFull(qu))
    {
        qu.rear=(qu.rear+1)%maxSize;
        qu.data[qu.rear]=x;
        return 1;
    }
    return 0;
}
int deQueue(SqQueue &qu,int &x){
    if (!isEmpty(qu))
    {
        x = qu.data[qu.front];
        qu.front = (qu.front + 1) % maxSize;
        return 1;
    }
    return 0;
}