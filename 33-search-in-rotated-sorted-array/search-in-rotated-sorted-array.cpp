class Solution {
public:
    int binaryHelper(vector<int>&nums, int low, int high, int target){
        while(low<=high){
            int mid = (low+high) / 2;
            if(nums[mid]==target){
                return mid;
            }
            if(binaryHelper(nums,mid+1,high, target)!=-1){
                return binaryHelper(nums,mid+1, high, target);
            }
            else{
                return binaryHelper(nums,low, mid-1,target);
            } 
            
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binaryHelper(nums,0,nums.size()-1,target);
    }
};