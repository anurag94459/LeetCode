class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;  // Total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        long long leftSum = 0;  // Sum of the left part
        int res = 0;

        // Iterate through the array, considering each split
        for (int i = 0; i < n - 1; i++) { // Ensure at least one element on the right
            leftSum += nums[i];
            long long rightSum = totalSum - leftSum;

            if (leftSum >= rightSum) {
                res++;
            }
        }

        return res;
    }
};
