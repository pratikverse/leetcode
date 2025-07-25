class Solution {
public:
    // int search(vector<int>& nums, int target) {
    //     int low = 0;
    //     int high = nums.size()-1;
    //     while(low<=high){
    //         int mid = (low+high) / 2;
    //         if(nums[mid] == target) return mid;
    //         else if(target>nums[mid]) low = mid+1;
    //         else{
    //             high = mid - 1;
    //         }
    //     }
    //     return -1;
    // }
    int fn(vector<int> &nums, int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (nums[mid] == target) {
        return mid;
    } else if (target > nums[mid]) {
        return fn(nums, mid + 1, high, target);
    } else {
        return fn(nums, low, mid - 1, target);
    }
}

int search(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    return fn(nums, low, high, target);
}

};