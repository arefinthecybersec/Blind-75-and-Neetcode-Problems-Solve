class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);

        // Reverse the string
        int m = s.length();
        for (int i = 0; i < m / 2; i++) {
            swap(s[i], s[m - i - 1]);
        }

        // If the number was negative, the '-' sign would be at the end after reversal
        if (s.back() == '-') {
            s.pop_back();       // Remove the '-' from the end
            s.insert(s.begin(), '-');  // Insert '-' at the beginning
        }

        // Convert the string back to an integer
        long long p = stoll(s); // Use long long to safely check for overflow

        // Check if the result is within the 32-bit signed integer range
        if (p < -2147483648 || p > 2147483647) {
            return 0;
        }

        return static_cast<int>(p);
    }
};
