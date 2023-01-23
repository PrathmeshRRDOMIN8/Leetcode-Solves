/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        tempA = headA;
        tempB = headB;
        while(tempB!=nullptr){
                while(tempA!=nullptr){
                if(tempA==tempB)
                    return tempA;
                tempA=tempA->next;
          }
            tempB=tempB->next;
            tempA = headA;
        }
        return nullptr;
    }
};