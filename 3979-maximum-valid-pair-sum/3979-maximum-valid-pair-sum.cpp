class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = INT_MIN;
        int bestLeft = nums[0];

        for(int j = k; j < n; j++) {
            // update bestLeft with element at j-k
            bestLeft = max(bestLeft, nums[j-k]);
            // calculate sum with current j
            maxsum = max(maxsum, nums[j] + bestLeft);
        }

        return maxsum;
    }
};
