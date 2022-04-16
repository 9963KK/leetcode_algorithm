#include<iostream>
#include<stack>
#include<vector>
using namespace std;
struct ListNode {
     int val;
     struct ListNode *next;
     ListNode(int x):val(x),next(NULL){}
 };
//  class Solution{
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* p=head;
//         ListNode* q=head;
//         while (p->next!=NULL)
//         {
//             if (q->next->next==NULL)
//             {   
//                 q->next=q->next->next;
//                 head=q->next;
//                 q=head;
//                 continue;
//             }
//             q=q->next;
//         }
        
//     return head;
        
//     }
//  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /* 因为反转链表最重要的就是把指针的指向给反过来就可以 
         * 所以定义两个指针一个指向前一个一个指向当前结点然后反向就可以 
        */

        ListNode* cur = head;
        ListNode* pre = NULL;

        while(cur != NULL) {
            /* 用一个零时变量存储数据防止结点地址丢失 */
            ListNode* tmp = cur->next;
            cur->next = pre;

            /* 更新pre 和cur */
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};//经典解法可应用到数据结构中去（双指针解法）