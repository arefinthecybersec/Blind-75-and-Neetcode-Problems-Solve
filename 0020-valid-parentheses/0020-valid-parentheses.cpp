//T.C - O(n)
//S.C - O(1)

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        if(s.size() == 1) return false;
        
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++) {
            if(!st.empty() && ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))) {
                st.pop();
            }
            else st.push(s[i]);
        }

        if(st.empty()) {
            return true;
        }
        else return false;
    }
};