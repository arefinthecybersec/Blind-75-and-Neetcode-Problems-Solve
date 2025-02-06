class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;

        else if(n % 2 == 0) {
            double ans = (pow(x, n/2)) * (pow(x, n/2));
            return ans;
        }

        else if(n % 2 != 0) {
            double ans = x * (pow(x, (n-1)/2)) * (pow(x, (n-1)/2));
            return ans;
        }

        else {
            double ans = pow(x, -n);
            return (1/ans);
        }
    }
};