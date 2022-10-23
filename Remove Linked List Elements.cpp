/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* removeElements(ListNode* head, int value) {
        if(head==nullptr) return head;
        while(head!=nullptr && head->val==value){
            head = head->next;
        }
        ListNode* curr = head;
        while(curr!=nullptr  && curr->next!=nullptr){
            if(curr->next->val==value){
                curr->next = curr->next->next;
            }
            else
                curr = curr->next;
        }
        return head;
    }
};
/* if(head->val==value){
     head = head->next;
    }
  * else if(curr->next!=nullptr && curr->next->val==value){
    curr->next = curr->next->next;
   }
 * curr=curr->next;
*/