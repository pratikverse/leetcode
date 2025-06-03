class Solution {
public:
    int climbStairs(int n) {
    if (n <= 1) return 1;
    
    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // Base case: 1 way to climb 0 stairs
    dp[1] = 1;  // Base case: 1 way to climb 1 stair
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];  // Can reach current step from either 1 or 2 steps below
    }
    
    return dp[n];
}
};