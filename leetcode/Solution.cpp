#include<iostream>
#include<vector>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
 
// class Solution {
// public:
//     vector<int> new_vec;
//     vector<int> reversePrint(ListNode* head) {
//         ListNode* temp=(ListNode*)malloc(sizeof(ListNode*));
//         while (head->next!=NULL)
//         {
//             ListNode* p=head->next;
//             head->next=p->next;
//             p->next=temp->next;
//             temp->next=p;
//         }
//         ListNode*q=temp->next;
//   while (q!=NULL)
//   {
//       new_vec.push_back(q->val);
//       q=q->next;
//   }
//   free(temp);
        
//     }
// };
class Solution {
public:
    vector<int> new_vec;
    
    vector<int> reversePrint(ListNode* head) {
        ListNode* p=head->next;
        vector<int> temp;
        while (p!=NULL)
        {
            temp.push_back(p->val);
            p=p->next;
        }
  while (!temp.empty())
  {
      new_vec.push_back(temp.back());
      temp.pop_back();
  }
     return new_vec;   
    }
};
void main(){
Solution *s=new Solution();



}