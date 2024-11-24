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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto dHead = new ListNode(0); //add dummy head
        dHead -> next = head;

        auto fast = dHead;
        auto slow = dHead;

        for (int i = 0; i <= n; i++) {
            if(fast == nullptr) return head; //
            fast = fast -> next;
        }

        while(fast != nullptr) {
            fast = fast -> next;
            slow = slow -> next;
        }

        auto toDelete = slow -> next;
        slow -> next = toDelete -> next;
        delete toDelete;

        auto newHead = dHead -> next;
        // delete dHead;
        return newHead;
    }
};


