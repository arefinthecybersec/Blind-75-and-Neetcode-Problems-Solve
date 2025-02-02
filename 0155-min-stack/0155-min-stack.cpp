class MinStack {
private:
    stack<int> minStack, mainStack;
public:
    void push(int val) {
        if(minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
        mainStack.push(val);
    }
    
    void pop() {
        if(mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};