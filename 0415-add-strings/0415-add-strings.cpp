class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0, i = num1.size()-1, j = num2.size()-1;
        string result;

        while(i >= 0 || j >= 0 || carry) {
            int x1 = 0, x2 = 0;

            if(i >= 0) x1 = num1[i] - '0';
            if(j >= 0) x2 = num2[j] - '0';

            int sum = (x1 + x2) + carry;
            result.push_back((sum % 10) + '0');
            carry = (sum / 10);

            i--, j--;
        }
        reverse(result.begin(), result.end());

        return result;
    }
};