class Solution {
public:
    int findMinHelper(vector<int> nums, int low, int high) {
        int curLow = INT_MIN;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid]) {
                curLow = nums[low];
                return min(curLow, findMinHelper(nums, mid + 1, high));
            } else {
                return min(findMinHelper(nums, low, mid-1), findMinHelper(nums, mid, high));
            }
        }
        return INT_MAX; // Added to ensure return in all paths
    }

    int findMin(vector<int>& nums) {
        return findMinHelper(nums, 0, nums.size() - 1);
    }
};
