class Solution {
public:
    int reverse(int x) {
        int sum = 0;
        while(x != 0) {
            int val = x % 10;
            if(sum < -2147483648 || sum > 2147483647) return 0;

            if(sum < -2147483648 / 10 || (sum == -2147483648 / 10 && val > 8)) return 0;
            if(sum > 2147483647 / 10 || (sum == 2147483647 / 10 && val > 7)) return 0;

            sum = (sum * 10) + val;
            x /= 10;
        }
        return sum;
    }
};