class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Step 1: value aur original index ko pair mein store karo
        vector<pair<int, int>> valIndex(n);
        for (int i = 0; i < n; i++) {
            valIndex[i] = {nums[i], i};
        }
        
        // Step 2: value ke hisaab se sort karo (pair khud value par sort hota hai)
        sort(valIndex.begin(), valIndex.end());
        
        // Step 3: two pointer approach
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = valIndex[left].first + valIndex[right].first;
            
            if (sum == target) {
                return {valIndex[left].second, valIndex[right].second};
            }
            else if (sum < target) {
                left++;   // sum chhota hai, thoda bada number try karo
            }
            else {
                right--;  // sum bada hai, thoda chhota number try karo
            }
        }
        
        return {}; // agar koi pair na mile
    }
};