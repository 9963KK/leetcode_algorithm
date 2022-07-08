#include "stdio.h"
#include "stdlib.h"
#define MAXSIZE 100
#include "Basic.h"
bool ListDelete(SqList &L,Elemtype e,int i){
    if (i<1||i>L.length)
    {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
    {
        L.data[j-1]=L.data[j];
        L.length--;
    }
    return true;
}
int LocateElem(SqList L,Elemtype e){
    int i=0;
    for ( i = 0; i < L.length; i++)
    {
        if (e.i==L.data[i].i)
        {
            return i+1;
        }
        
    }
    return -1;
    
}
//线性链表部分
//头插法建立链表（带头结点）
LinkList LinkList_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=nullptr;
    scanf("%d",&x);
    while (x!=9999)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data.i=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}
//头插法建立链表（不带头结点）
LinkList LinkList_HeadInsert_NoHeadNode(LinkList &L)
{
    LNode *s;
    int x;
    L->next = nullptr;
    scanf("%d", &x);
    while (x != 9999)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data.i = x;
        s->next = L;
        L=s;
        scanf("%d", &x);
    }
    return L;
}
//尾插法建立链表
LinkList LinkList_TailInsert(LinkList &L){
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    LNode *s,*r=L;
    scanf("%d",&x);
    while (x!=9999)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data.i=x;
        r->next=s;
        r=r->next;
        scanf("%d",&x);
    }
    r->next=nullptr;
    return L;
}
//按序号查找结点值
LNode *GetElem(LinkList L,int i)
{
    int j=1;
    LNode *p=L->next;
    if (i<0)
    {
        /* code */
        return NULL;
    }
    while (p&&j<i)
    {
        p=p->next;
        j++;   
    }
    return p;
};
//对比查找结点
LNode *LocateElem(LinkList L,Elemtype e){
LNode *p=L->next;
while (p&&p->data.i!=e.i)
{
    p=p->next;
}
return p;
}
//后插入节点
LinkList ElemInsert(LinkList &L,Elemtype e,int i){
    LNode *p=GetElem(L,i-1);
    LNode *temp=(LNode*)malloc(sizeof(LNode));
    temp->data=e;
    temp->next=p->next;
    p->next=temp;
    return L;
}

//结点删除
LinkList ElemDele(LinkList &L, int i){
LNode *p=GetElem(L,i-1);
LNode* q=p->next;
p->next=q->next;
free(q);
return L;
}
//双链表
DLinkList ElemInsert(DLinkList &D,Elemtype){

}
//p40_22
typedef struct TempNode
{
    Elemtype e;
    struct TempNode *link;
}TempNode,*TempNodeList;
int GetLastNodde(TempNodeList TL,int k){
int length=1;
TempNode *p=TL->link;
if (!p)
{
    return 0;
}

while (p)
{
    p=p->link;
    length++;
}
int count=length-k;
if (count<0)
{
    return 0;
}
p=TL->link;
while (p&&count>=0)
{   
        p=p->link;
        count--;
}
return 1;
}

int main(){


   return 0;
}