class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        
        while (st <= end) {
            // Using this formula avoids potential integer overflow
            int mid = st + (end - st) / 2;
            
            if (target > nums[mid]) {
                st = mid + 1;
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                return mid; // Target found
            }
        }
        
        return -1; // Target not found
    }
};