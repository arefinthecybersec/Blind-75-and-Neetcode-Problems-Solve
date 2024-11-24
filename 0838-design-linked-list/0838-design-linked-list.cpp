//T.C = O(n)
//M.C = O(n)
//Hints = Yes
//Time: 1H 30M

class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {} // ?
    };
    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* current = head;
        for(int i = 0; i < index; i++) {
            current = current -> next;
        }
        return current -> val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        // newNode -> data = val;
        newNode -> next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        // newNode -> data = val;
        newNode -> next = nullptr;
        if(!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while(temp -> next != nullptr) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;
        if(index == 0) {
            addAtHead(val);
        }
        else {
            Node* newNode = new Node(val);
            // newNode -> data = val;

            Node* temp = head;
            for(int i = 0; i < index-1; i++) {
                if(temp -> next != nullptr) {
                    temp = temp -> next;
                }
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        if(index == 0) {
            Node* toDelete = head;
            head = head -> next;
            delete toDelete;
        }
        else {
            Node* temp = head;
            for(int i = 0; i < index-1; i++) {
                if(temp -> next != nullptr) {
                    temp = temp -> next;
                }
            }
            Node* toDelete = temp ->next;
            temp -> next = toDelete -> next;
            delete toDelete;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */