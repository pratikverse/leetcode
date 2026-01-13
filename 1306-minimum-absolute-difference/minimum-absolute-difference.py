class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        res = []
        diff = float('inf')
        n = len(arr)
        arr.sort()

        for i in range(1,n):
            diff = min(diff, arr[i]-arr[i-1])
        
        for i in range(1,n):
            if arr[i]-arr[i-1] == diff:
                res.append([arr[i-1],arr[i]])
        
        return res



