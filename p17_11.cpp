#include"stdio.h"
#include"stdlib.h"
#define MAXSIZE 10
typedef struct Elem
{
    /* data */
    int* data;
    int length;
}*List;
int getMidValuePosition(List &L){
int result=0;
result=(L->length/2)+(L->length%2)-1;
return L->data[result];
}
List InitList(int x){
 List NewList=(List)malloc(sizeof(List));
 NewList->length=x;
 NewList->data=(int*)malloc(sizeof(int)*MAXSIZE);
 for (int i = 0; i < NewList->length; i++)
 {
    NewList->data[i]=0;
 }
 return NewList;
}
bool ElemInsert(List &L,int order,int value){
if (order>=1&&order<=L->length)
{
    
    for (int i = L->length-1; i >order-1; i--)
    {
        L->data[i+1]=L->data[i];
               
    }
    L->data[order-1]=value;
    if (++L->length>MAXSIZE)
    {
        return false;
    }
    
    return true;
}
else{
    return false;
}
}
List CombineList(List &L1,List &L2){
for (int i = 0; i < L2->length; i++)
{
    for (int j = 0; j < L1->length; j++)
    {
        if (L2->data[j]<L1->data[i])
        {
            if (ElemInsert(L1,i+1,L2->data[j]))
            {
                /* code */
                continue;
            }   
        }
        if (L2->data[L2->length-1]>L1->data[L1->length-1])
        {
            if (ElemInsert(L1,L1->length,L2->data[L2->length-1]))
            {
                /* code */
                continue;
            }        
        }
            
    }
}
}
int main(){
    List L=InitList(5);
    ElemInsert(L,1,2);
   printf("%d",L->data[0]);
    free(L->data);
    free(L);
    return 1;
}