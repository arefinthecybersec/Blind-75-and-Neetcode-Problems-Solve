class Solution {
public:
    int pairSum(ListNode* head) {
        auto fast = head;
        auto slow = head;

        while(fast != nullptr) { 
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        auto curr = head;
        ListNode* prev = slow -> next;

        
        while(curr != slow) {
            auto nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }

        ListNode* tmp = prev;
        ListNode* tmp2 = slow;
        int mx = INT_MIN;
        while(tmp && tmp2) {
            int sum = tmp -> val + tmp2 -> val;
            mx = max(mx, sum);

            tmp = tmp -> next;
            tmp2 = tmp2 -> next;
        }
        return mx;
    }
};