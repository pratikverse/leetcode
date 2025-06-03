class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return true;
    
    // dp[i] represents whether position i is reachable
    vector<bool> dp(n, false);
    dp[0] = true;  // Base case: first position is always reachable
    
    for (int i = 0; i < n; i++) {
        // If current position is not reachable, skip
        if (!dp[i]) continue;
        
        // Mark all positions reachable from current position
        for (int j = 1; j <= nums[i] && i + j < n; j++) {
            dp[i + j] = true;
        }
        
        // If we can reach the end, return true
        if (dp[n-1]) return true;
    }
    
    return dp[n-1];
}
};