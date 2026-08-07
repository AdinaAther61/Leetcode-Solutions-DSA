class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // int overflow se bachne ke liye (n = -2147483648 case)
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) {       // agar N odd hai
                result = result * x;
                N--;
            } else {                 // agar N even hai
                x = x * x;
                N = N / 2;
            }
        }
        
        return result;
    }
};