class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string str = "";
        string cnt = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ']') { 
                while(st.top() != '[') {
                    str = st.top() + str; // till this [, all char add
                    st.pop();
                }
                st.pop(); // remove '['

                while(!st.empty() && isdigit(st.top())) { // collect numbers
                    cnt = st.top() + cnt;
                    st.pop();
                }

                int x = stoi(cnt);
                while(x--) {
                    for(char c: str) {
                        st.push(c);
                    }
                }
                str = "";
                cnt = "";
            }
            else {
                st.push(s[i]);
            }
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};