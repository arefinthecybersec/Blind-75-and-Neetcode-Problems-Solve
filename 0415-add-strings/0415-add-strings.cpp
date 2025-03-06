class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string result;

        for(int i = num1.size()-1, j = num2.size()-1; i >= 0 || j >= 0; i--, j--) {
            int x1 = 0, x2 = 0;

            if(i >= 0) {
                x1 = num1[i] - '0';
            }
            if(j >= 0) {
                x2 = num2[j] - '0';
            }

            int sum = (x1 + x2) + carry;
            carry = 0;
            if(sum > 9) {
                carry = (sum / 10);
            }
            int ans = (sum % 10);
            char c = ans + '0';
            result.push_back(c);
        }
        if(carry > 0) result.push_back(carry + '0');
        reverse(result.begin(), result.end());

        return result;
    }
};