class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (n > 1) {
            if (n % 2 != 0) {
                return false;  // for checking odd number
            }
            else {
                n = n / 2;
            }
        }
        return n == 1;   // after completing loop it checks either n becoes 1 or not if it becomes 1 it means it returns true
    }
};