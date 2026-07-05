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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            int val=l1->val+l2->val+carry;
            l1=l1->next;
            l2=l2->next;
             carry=val/10;
             val=val%10;
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        while(l1!=NULL){
 int val=l1->val+carry;
 l1=l1->next;
            carry=val/10;
             val=val%10;
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        while(l2!=NULL){
 int val=l2->val+carry;
 l2=l2->next;
            carry=val/10;
             val=val%10;
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        if(carry)
    temp->next = new ListNode(carry);
        return dummy->next;
    }
};