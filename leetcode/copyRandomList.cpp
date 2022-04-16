#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if (head==NULL)
//         {
//             return nullptr;
//         }
//         Node* cur=head;
//         unordered_map <Node*,Node*> map;
//         while (cur!=nullptr)
//         {
//             map[cur]=new Node(cur->val);
//             cur=cur->next;
//         }
//         cur=head;
//         while (cur!=nullptr)
//         {
//             map[cur]->next=map[cur->next];
//             map[cur]->random=map[cur->random];
//             cur=cur->next;
//         }
//         return map[head];
        
//     }
// };
class Solution{
    public:
     Node* copyRandomList(Node* head){
         if(head==nullptr) return nullptr;//始终加入前提条件
         Node* cur=head;
         while (cur!=nullptr)
         {
             Node *temp=new Node(cur->val);
            temp->next=cur->next;
            cur->next=temp;
            cur=cur->next->next;
         }
         cur=head;
         while (cur!=nullptr)
         {
             cur->next->random=cur->random->next;
             cur=cur->next->next;
         }
         cur=head->next;
         Node* pre=head;
         Node* res=head->next;
         while (cur!=nullptr)
         {  
          pre->next=pre->next->next;
          pre=pre->next;
          cur->next=pre->next;
          cur=cur->next;
         }//cpp对空指针敏感，不能用其赋值，故初始化为random=null不能重新赋值null

         return res;
         



     }
};