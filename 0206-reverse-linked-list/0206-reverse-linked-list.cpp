//T.C = 0(n)
//M.C = o(1)
//Hints = Yes - Learn the approach
//Time: 1H

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto curr = head;
        ListNode* prev = nullptr; //nullptr auto nile compile hy na

        while(curr) {
            auto nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
};