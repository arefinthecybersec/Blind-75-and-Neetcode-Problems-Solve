class MinStack {
private:
    stack<int> minStack, mainStack;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
        mainStack.push(val);
    }
    
    void pop() {
        if(!mainStack.empty()) {
            if(mainStack.top() == minStack.top()) {
                minStack.pop();
            }
            mainStack.pop();
        }
    }
    
    int top() {
        if(!mainStack.empty()) {
            return mainStack.top();
        }
        return -1;
    }
    
    int getMin() {
        if(!minStack.empty()) {
            return minStack.top();
        }
        return -1;
    }
};