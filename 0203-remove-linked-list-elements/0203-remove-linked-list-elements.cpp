class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) {

        while (head && head->val == value)
            head = head->next;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp) {
            if (temp->val == value) {
                prev->next = temp->next;
                temp = temp->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};