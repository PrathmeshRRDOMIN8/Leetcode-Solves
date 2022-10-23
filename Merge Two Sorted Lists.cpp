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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        if(list2==nullptr)
            return list1;   
        
        if(list1->val<=list2->val){
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* curr2 = list2;
        while(temp2!=nullptr){
            int value = temp2->val;
            while(temp1->next!=nullptr && (temp1->next->val)<value)
                temp1=temp1->next;
            curr2 = curr2->next;
            temp2->next = temp1->next;
            temp1->next = temp2;
            temp2=curr2;
          }
          return list1;
        }
        else{
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* curr1 = list1;
          while(temp1!=nullptr){
            int value = temp1->val;
            while(temp2->next!=nullptr && (temp2->next->val)<value)
                temp2=temp2->next;
            curr1 = curr1->next;
            temp1->next = temp2->next;
            temp2->next = temp1;
            temp1=curr1;
        }
           return list2;  
        }
    }
};