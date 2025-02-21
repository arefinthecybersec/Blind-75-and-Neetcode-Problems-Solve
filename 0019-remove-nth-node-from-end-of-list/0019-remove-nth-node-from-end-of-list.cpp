
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while(curr != nullptr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;

        n = n-1; //for 0-based indexing:
        if(n == 0) {
            ListNode* temp = head;
            head = head -> next;
            delete temp;
        }
        else {
            ListNode* temp = head;
            for(int i = 0; i < n-1 && temp -> next != nullptr; i++) {
                temp = temp -> next;
            }
            if(temp -> next != nullptr) {
                ListNode* toDelete = temp -> next;
                temp -> next = temp -> next -> next;
                delete toDelete;
            }
        }

        curr = head;
        prev = nullptr;
        next = nullptr;

        while(curr != nullptr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};