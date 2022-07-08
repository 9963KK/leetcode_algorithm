#ifndef BASIC_H
#define BASIC_H
#include <stdio.h>
#include "stdlib.h"
const int maxSize=50;
typedef struct Elemtype
{
    int i;
    char info[1024];
} Elemtype;
typedef struct LNode
{
    Elemtype data;
    struct LNode *next;
}LNode,*LinkList;


typedef struct SqList
{ 
    Elemtype *data;
    int length;
} SqList;
//双链表
typedef struct DNode
{
    Elemtype e;
    struct DNode *prior,*next;
}DNode,*DLinkList;
//栈
typedef struct stack
{
    int data[maxSize];//存放栈的数组
    int top;//栈顶指针
}SqStack;
typedef struct LNode
{
    int data;//数据域
    struct LNode *next;//指针域
}LNode;
//队列
typedef struct{
int data[maxSize];
int front;
int rear;
}SqQueue;

#endif