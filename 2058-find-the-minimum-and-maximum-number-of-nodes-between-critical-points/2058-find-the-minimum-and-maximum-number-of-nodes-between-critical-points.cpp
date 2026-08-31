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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> points;
        ListNode* temp=head;
        ListNode* prev=temp;
        int count=1;
        temp=temp->next;

        while(temp->next){
             ListNode* next=temp->next;
             if((prev->val < temp->val && next->val <temp->val)||(prev->val>temp->val && next->val > temp->val)){
                points.push_back(count);
             }
             count++;
             prev=temp;
             temp=next;
        }
        if(points.size()<2)
        return {-1,-1};
        int mini=INT_MAX;;
        int maxi=points.back()-points[0];
        for(int i=1;i<points.size();i++){
            mini=min(mini,points[i]-points[i-1]);

        }
        return {mini,maxi};
    }
};