class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        for(int i=0;i<k;i++){
            int k=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[k]){
                    k=j;
                }
            }
            nums[k]*=multiplier;
        }
        return nums;
    }
};