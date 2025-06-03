class Solution {
public:
    int jump(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;
    
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;  // Base case: 0 jumps needed to reach first position
    
    for (int i = 0; i < n; i++) {
        // For each position, try all possible jumps
        for (int j = 1; j <= nums[i] && i + j < n; j++) {
            dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }
    
    return dp[n-1];
}
};