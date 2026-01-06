class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        one,two = 0,0

        for i in nums:
            temp = max(one+i, two)
            one = two 
            two = temp
        return two
        