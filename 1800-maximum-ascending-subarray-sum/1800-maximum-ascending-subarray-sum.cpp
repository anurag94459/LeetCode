class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0;
        int max1=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                sum=sum+nums[i];
                max1=max(max1,sum);
                sum=0;
            }
            else
                sum=sum+nums[i];
        }
        sum=sum+nums[nums.size()-1];
        max1=max(max1,sum);
        return max1;
    }
};