#include "stdio.h"
#include "stdlib.h"
#include "Basic.h"
void initStack(SqStack &st){
    st.top=-1;
}
int isEmpty(SqStack st){
    if (st.top==-1)
    {
        return 1;
    }
    return 0;
    }
int push(SqStack &st,int x){
    if (st.top==maxSize-1)
    {
        return 0;
    }
    st.data[++st.top]=x;
    return 1;
}
int pop(SqStack &st,int &x){
    if (st.top==-1)
    {
        return 0;
    }
    x=st.data[st.top--];
    return 1;

}
