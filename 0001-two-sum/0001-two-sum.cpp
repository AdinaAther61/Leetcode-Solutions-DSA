class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Step 1: 
        vector<pair<int, int>> valIndex(n);
        for (int i = 0; i < n; i++) {
            valIndex[i] = {nums[i], i};
        }
        
        // Step 2: 
        sort(valIndex.begin(), valIndex.end());
        
        // Step 3: two pointer approach
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = valIndex[left].first + valIndex[right].first;
            
            if (sum == target) {
                return {valIndex[left].second, valIndex[right].second};
            }
            else if (sum < target) {
                left++;   // sum 
            }
            else {
                right--;  
            }
        }
        
        return {}; // if no pair is found than return
    }
};
