class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []
        def backtrack(index, path):

            if index == len(nums):
                return result.append(path[:])
            
            #choice 1
            path.append(nums[index])
            backtrack(index+1, path)
            path.pop()

            backtrack(index+1,path)

        
        backtrack(0,[])
        return result

        