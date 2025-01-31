class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        

        ListNode* head = nullptr;
        ListNode* current = nullptr;


        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                if (head == nullptr) {
                    head = list1;  
                    current = head;
                } else {
                    current->next = list1;
                    current = current->next;
                }
                list1 = list1->next; 
            } else {
                if (head == nullptr) {
                    head = list2;
                    current = head;
                } else {
                    current->next = list2;
                    current = current->next;
                }
                list2 = list2->next;  
            }
        }

        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        return head;
    }
};
