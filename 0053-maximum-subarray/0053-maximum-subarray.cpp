class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;
        for(int val:nums){
            currsum+=val;
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};

//here we are  using kadanes algorithms if sum becomes negative so we set it to zero bcz a negative sum can make the num lesser
