class Solution(object):
    def rob(self, nums):
        n = len(nums)
        if n == 0: return 0
        if n == 1: return nums[0]
        if n == 2: return max(nums[0], nums[1])
        
        # Scenario 1: Rob houses 0 to n-2
        # Scenario 2: Rob houses 1 to n-1
        return max(self.simple_rob(nums[:-1]), self.simple_rob(nums[1:]))
            
    def simple_rob(self, nums):
        if not nums: return 0
        n = len(nums)
        if n == 1: return nums[0]
        
        dp = [0] * n
        dp[0] = nums[0]
        dp[1] = max(nums[0], nums[1])
        
        for i in range(2, n):
            dp[i] = max(nums[i] + dp[i-2], dp[i-1])
        
        return dp[-1]