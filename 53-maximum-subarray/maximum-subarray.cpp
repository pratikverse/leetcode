class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxSum = INT_MIN;
    int window = 0;
    while(window < nums.size()) {
        sum += nums[window];
        maxSum = max(maxSum, sum);
        if(sum < 0) 
            sum = 0;
        window++;
    }
    return maxSum;
}
};