#include<stdio.h>
#include<stack>
#include<stdlib.h>
using namespace std;
class MinStack
{
public:
stack<int> std;
int minvalue;//minvalue的初始值不确定，能不用中间值就不用中间值
stack<int> stdmin;
MinStack(){
while (!std.empty())
{
    /* code */
    std.pop();
    stdmin.pop();
}
while (!stdmin.empty())
{
    /* code */
    stdmin.pop();
}

}
void push(int x){
   
    if (std.empty()||stdmin.top()>x)
    {
        stdmin.push(x);
        
    }
    std.push(x);
    
}
void pop(){
  if (std.top()==stdmin.top())
  {
      
      stdmin.pop();
  }
  std.pop();

}
int top(){
    return std.top();
}
int min(){
    return stdmin.top();
}
};
int main(){
    MinStack* minstack=new MinStack();
    minstack->push(-1);
    minstack->push(0);
    minstack->push(-3);
    printf("%d\n",minstack->min());
    minstack->pop();
    printf("%d",minstack->min());
    return 1;
}
