class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};  // ✅ correct return
            } else if (sum < target) {
                left++;   // ✅ move left forward
            } else {
                right--;  // ✅ move right backward
            }
        }
        return {}; // fallback (though problem guarantees solution)
    }
};
