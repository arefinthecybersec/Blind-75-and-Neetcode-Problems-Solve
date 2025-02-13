class Solution {
public:
    double recursiveApproach(double x, long long n) {
        if(x == 0) return 0;
        if(n == 0) return 1;

        double res;
        res = recursiveApproach(x, n/2);

        if(n & 1) {
            return x * res * res;
        }
        else return res * res;
    }

    double myPow(double x, long long n) {
        double ans = recursiveApproach(x, abs(n));

        if(n < 0) {
            ans = 1/ans;
        }
        return ans;
    }
};