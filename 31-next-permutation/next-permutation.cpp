class Solution {
public:
    int breakpointFinder(vector<int>& nums) {
    int n = nums.size();
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            return i;
        }
    }
    return -1; // No breakpoint found
}

// Find the index of the smallest number greater than nums[breakpoint], to the right of breakpoint
int nextMaxFinder(vector<int>& nums, int breakpoint) {
    int n = nums.size();
    int nextMaxIndex = -1;
    for (int i = n - 1; i > breakpoint; --i) {
        if (nums[i] > nums[breakpoint]) {
            nextMaxIndex = i;
            break;
        }
    }
    return nextMaxIndex;
}

void nextPermutation(vector<int>& nums) {
    int breakpoint = breakpointFinder(nums);
    if (breakpoint == -1) {
        sort(nums.begin(), nums.end());
        return;
    }
    int nextMaxIndex = nextMaxFinder(nums, breakpoint);
    swap(nums[breakpoint], nums[nextMaxIndex]);
    reverse(nums.begin() + breakpoint + 1, nums.end());
}
};