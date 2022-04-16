#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
using namespace std;
class CQueue {
public:
    /* 定义两个栈用于模拟队列 */
    stack<int> stIn;
    stack<int> stOut;
    /* 构造函数清空栈 */
    CQueue() {
        while(!stIn.empty()) {
            stIn.pop();        
        }
        while(!stOut.empty()) {
            stOut.pop();        
        }
    }
    
    void appendTail(int value) {
        stIn.push(value);
    }
    
    int deleteHead() {
        /* 只有当输出栈为空的情况下才将输入栈的数据全部导入到输出栈 */
        if(stOut.empty()) {
            while(!stIn.empty()) {
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        /* 如果栈为空输出-1 */
        if (stOut.empty()) {
            return -1;
        }
        else {
            /* 输出栈获取输出的元素值 */
            int result = stOut.top();
            /* 获取值后将此元素弹出 */
            stOut.pop();
            return result;
        }
    }
};
