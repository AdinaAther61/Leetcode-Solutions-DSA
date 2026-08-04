class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            int curr = nums[i];
            
            if(curr < 0) {
                swap(maxProd, minProd); // negative flips roles
            }
            
            maxProd = max(curr, curr * maxProd);
            minProd = min(curr, curr * minProd);
            
            result = max(result, maxProd);
        }
        
        return result;
    }

};