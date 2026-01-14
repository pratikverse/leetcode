class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def backtrack(path):

            #base case

            if len(path)== len(nums):
                res.append(path[:])
                return
            
            
            for num in nums:

                if num in path:
                    continue
                path.append(num)
                backtrack(path)
                path.pop()
            
        backtrack([])
        return res
