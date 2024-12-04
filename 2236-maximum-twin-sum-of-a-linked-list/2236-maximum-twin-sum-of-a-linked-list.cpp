class Solution {
public:
    int pairSum(ListNode* head) {
        auto fast = head;
        auto slow = head;

        //(n/2)th element target
        while(fast != nullptr) { 
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        auto curr = head;
        ListNode* prev = nullptr;

        //1st part of (n/2) element reverse
        while(curr != slow) {
            auto nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }

        // try to implement reverse part and else part summation as a two pointer
        ListNode* first = prev;
        ListNode* second = slow;
        int mx = INT_MIN;

        while(first && second) {
            int sum = first -> val + second -> val;
            mx = max(mx, sum);

            first = first -> next;
            second = second -> next;
        }
        return mx;
    }
};