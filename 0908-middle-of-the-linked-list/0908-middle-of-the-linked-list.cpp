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
    ListNode* middleNode(ListNode* head) {
        auto dHead = new ListNode(0);
        dHead -> next = head;
        auto fast = dHead;
        auto slow = dHead;

        while(fast -> next && fast -> next -> next != nullptr) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        slow = slow -> next;
        return slow;
    }
};