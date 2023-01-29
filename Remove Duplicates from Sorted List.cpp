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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return nullptr; 
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode *temp = head;
        ListNode *temp2;
        while(head->next!=nullptr){
            if(head->val==head->next->val){
                temp2= head->next->next;
                delete(head->next);
                head->next = temp2;
            }
            else
            head=head->next;
        }
        return temp;
    }
};