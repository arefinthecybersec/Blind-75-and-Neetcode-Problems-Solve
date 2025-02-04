class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto fast = head;
        auto slow = head;
        int cycle = 0;

        while(fast && fast -> next != nullptr) {
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow) {
                cycle = 1; break;
            }
        }
        if(cycle == 0) return nullptr;;

        fast = head;
        while(fast != slow) {
            fast = fast -> next;
            slow = slow -> next;
        }
        return fast;
    }
};