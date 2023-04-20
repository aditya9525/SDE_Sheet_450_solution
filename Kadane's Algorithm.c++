class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximumSum=nums[0];
        for(int i=0; i<nums.size(); i++){
            sum = sum+nums[i];
            maximumSum = max(maximumSum, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maximumSum;
    }
};
