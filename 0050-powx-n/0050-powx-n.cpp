class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;

        long long N = n;
        if(N < 0) {
            x = 1/x;
            N = -N;
        }

        double ans = 1;
        while(N > 0) {
            if(N & 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }
        return ans;
    }
};