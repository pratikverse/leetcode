class Solution(object):
    def maxProduct(self, nums):
        currMax, currMin = 1, 1
        res = max(nums)

        for n in nums:
            tempMax = currMax
            currMax = max(n * currMax, n, n * currMin)
            currMin = min(n * tempMax, n, n * currMin)
            res = max(res, currMax)

        return res
