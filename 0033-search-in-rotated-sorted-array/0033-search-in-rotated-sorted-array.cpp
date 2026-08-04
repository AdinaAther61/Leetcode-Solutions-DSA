class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1; // initializing start and end values
        
        while (st <= end) {
            int mid = st + (end - st) / 2; // avoid overflow
            
            if (nums[mid] == target) {
                return mid; // target found
            }
            
            // Left half is sorted
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target <= nums[mid]) {
                    end = mid - 1; // target lies in left half
                } else {
                    st = mid + 1; // target lies in right half
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] <= target && target <= nums[end]) {
                    st = mid + 1; // target lies in right half
                } else {
                    end = mid - 1; // target lies in left half
                }
            }
        }
        
        return -1; // target not found
    }
};
