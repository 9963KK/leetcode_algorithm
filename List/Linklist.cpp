#include "stdio.h"
#include "stdlib.h"
#define MAXSIZE 100
typedef struct Elemtype
{
    int i;
    char info[1024];
}Elemtype;

typedef struct SqList
{
    Elemtype *data;
    int length;
}SqList;
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

int main(){


   return 0;
}