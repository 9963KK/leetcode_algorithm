#ifndef BASIC_H
#define BASIC_H
#include <stdio.h>
#include "stdlib.h"
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

#endif