class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = INT_MIN;
        int firstMaxIndex = -1;

        // Step 1: Sabse bara number aur uska index dhoondo
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstMax) {
                firstMax = nums[i];
                firstMaxIndex = i;
            }
        }

        int secondMax = INT_MIN;

        // Step 2: firstMaxIndex ko skip kar ke doosra sabse bara number dhoondo
        for (int i = 0; i < nums.size(); i++) {
            if (i != firstMaxIndex && nums[i] > secondMax) {
                secondMax = nums[i];
            }
        }

        return (firstMax - 1) * (secondMax - 1);
    }
};