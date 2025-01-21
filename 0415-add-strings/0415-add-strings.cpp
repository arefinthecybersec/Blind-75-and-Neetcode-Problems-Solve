class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int carry = 0;

        for(int i = num1.size()-1, j = num2.size()-1; i >= 0 || j >= 0 || carry; i--,j--) {
            int last_char1 = 0, last_char2 = 0;
            if(i >= 0) {
                last_char1 = num1[i] - '0';
            }
            if(j >= 0) {
                last_char2 = num2[j] - '0';
            }

            int sum = last_char1 + last_char2 + carry;
            carry = sum/10;
            ans.push_back('0' + (sum%10));
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};