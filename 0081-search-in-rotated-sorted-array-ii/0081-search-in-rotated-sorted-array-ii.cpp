class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int l = 0, h = nums.size() - 1;

    while (l <= h) {
        int mid = (l + h) / 2;

        if (nums[mid] == target) {
            return true;
        }

        // Handle duplicates
        if (nums[l] == nums[mid] && nums[mid] == nums[h]) {
            l++;
            h--;
        }
        // If the left part is sorted
        else if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid]) {
                h = mid - 1; // Search in the left part
            } else {
                l = mid + 1; // Search in the right part
            }
        }
        // If the right part is sorted
        else {
            if (nums[mid] < target && target <= nums[h]) {
                l = mid + 1; // Search in the right part
            } else {
                h = mid - 1; // Search in the left part
            }
        }
    }

    return false; // Target not found
}

};