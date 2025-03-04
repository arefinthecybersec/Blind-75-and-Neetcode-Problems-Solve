class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c: s) {
            if(!st.empty() && ((st.top() == '(' && c == ')') ||
                               (st.top() == '{' && c == '}') ||
                               (st.top() == '[' && c == ']'))) {
                st.pop();
            } 
            else st.push(c);
        }
        return st.empty();
    }
};