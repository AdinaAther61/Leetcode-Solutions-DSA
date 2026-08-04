class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int start = 0; start < nums.size(); start++) {
            int currsum = 0;
            for(int end = start; end < nums.size(); end++) {
                currsum += nums[end];   // subarray sum from start to end
                if(currsum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
