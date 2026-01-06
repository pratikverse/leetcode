class Solution(object):
    def hr1(self, nums):
            rob1 = 0
            rob2 = 0

            for i in nums:
                temp = max(rob1+i, rob2)
                rob1 = rob2
                rob2 = temp
            
            return rob2

    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        
        return max(nums[0], self.hr1(nums[1:]), self.hr1(nums[:-1]))