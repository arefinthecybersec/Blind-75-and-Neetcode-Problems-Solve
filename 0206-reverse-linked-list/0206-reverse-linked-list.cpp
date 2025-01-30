class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while(curr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};