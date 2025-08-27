class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=-100000;
        int prevs;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            prevs=sum;
            sum+=nums[i];
            sum=max(sum,nums[i]);
            res.push_back(sum);
        }
        sum=*max_element(res.begin(),res.end());
        return sum;
    }
};