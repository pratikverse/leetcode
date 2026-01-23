class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        count = 0
        size = len(nums)
        for i in range(size):
            if (nums[i] > nums[(i+1)%size]):
                count +=1

        if count == 0 or count == 1:
            return True
        else:
            return False
