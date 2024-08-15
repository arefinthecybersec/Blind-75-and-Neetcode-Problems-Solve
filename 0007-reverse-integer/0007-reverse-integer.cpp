class Solution {
public:
    int reverse(int x) {
        // if(x > 2147483647 || x < -2147483648)
        //     return 0;
        string s = to_string(x);
        int m = s.length();
        for (int i = 0; i < m / 2; i++) {
            char temp = s[i];
            s[i] = s[m - i - 1];
            s[m - i - 1] = temp;
        }
        if (s.back() == '-') {
            s.insert(s.begin(), '-');
        }
        long long p = stoll(s);
        if (p < -2147483648 || p > 2147483647) {
            return 0;
        }
        return static_cast<int>(p);
    }
};