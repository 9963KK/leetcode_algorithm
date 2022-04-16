#include"stdio.h"
#include"stdlib.h"
typedef struct Elem
{
    int *data;
    int length;
} *List;

int main(){
    List NList=(List)malloc(sizeof(List));
    int temp=0;
    int k=2;
    NList->length=7;
    NList->data=(int*)malloc(sizeof(int)*NList->length);
    // printf("%d",NList->data[0]);
    for (int i = 0; i < 7; i++)
    {
        NList->data[i]=i;
        printf("The number is %d\n",NList->data[i]);
    }
    
    
    for (int i = 0; i < k; i++)
    {
        int move_arg=(NList->length-k+i);
        temp=NList->data[i];
        // printf("move_arg=%d\n",move_arg);
        NList->data[i]=NList->data[move_arg];
        NList->data[move_arg]=temp;
    }
    printf("====================\n");
    for (int i = 0; i < NList->length; i++)
    {
        printf("The number is %d\n",NList->data[i]);
    }
    free(NList->data);
    free(NList);
    
    return 1;
}