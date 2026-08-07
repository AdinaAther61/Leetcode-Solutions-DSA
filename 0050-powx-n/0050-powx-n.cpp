class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // long long to prevent from overflowing
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) {      
                result = result * x;
                N--;
            } else {              
                x = x * x;
                N = N / 2;
            }
        }
        
        return result;
    }
};