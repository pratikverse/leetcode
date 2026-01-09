class Solution(object):
    def uniquePaths(self, m, n):
        return self.helper(0, 0, m, n, {})

    def helper(self, i, j, m, n, memo):
        # Out of bounds
        if i >= m or j >= n:
            return 0

        # Destination reached
        if i == m - 1 and j == n - 1:
            return 1

        if (i, j) in memo:
            return memo[(i, j)]

        memo[(i, j)] = (
            self.helper(i + 1, j, m, n, memo) +
            self.helper(i, j + 1, m, n, memo)
        )

        return memo[(i, j)]
        
        
    
  
