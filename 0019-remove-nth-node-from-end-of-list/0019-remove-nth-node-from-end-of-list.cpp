// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         auto dHead = new ListNode(0); //add dummy head
//         dHead -> next = head;

//         auto fast = dHead;
//         auto slow = dHead;

//         for (int i = 0; i <= n; i++) {
//             if(fast == nullptr) return head; //
//             fast = fast -> next;
//         }

//         while(fast != nullptr) {
//             fast = fast -> next;
//             slow = slow -> next;

//             if(fast -> next == nullptr) {
//                 auto temp = new ListNode(0); 
//                 temp = slow -> next -> next; 
//                 auto temp2 = new ListNode(0); 
//                 temp2 = slow -> next; 
//                 delete temp2;
//                 break;
//             }
//         }

//         auto toDelete = slow -> next;
//         slow -> next = toDelete -> next;
//         delete toDelete;

//         auto newHead = dHead -> next;
//         delete dHead;
//         return newHead;
//     }
// };


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
        // Add a dummy head
        auto dHead = new ListNode(0);
        dHead->next = head;

        auto fast = dHead; // Start from dummy head
        auto slow = dHead; // Start from dummy head

        // Move `fast` pointer `n+1` steps ahead
        for (int i = 0; i <= n; i++) {
            if (!fast) return head; // Edge case: n is invalid
            fast = fast->next;
        }

        // Move both `fast` and `slow` until `fast` reaches the end
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the target node
        auto toDelete = slow->next;  // The node to be deleted
        slow->next = toDelete->next; // Update the pointer before deleting
        delete toDelete;             // Free the memory of the target node

        // Return the updated head
        auto newHead = dHead->next;  // Save the actual head
        delete dHead;                // Clean up the dummy head
        return newHead;
    }
};
