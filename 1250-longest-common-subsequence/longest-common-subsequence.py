class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        return self.lcs(0,0,text1,text2)
    
    def lcs(self, i,j, s1,s2,memo=None):
        if memo is None:
            memo = {}
        
        if (i,j) in memo:
            return memo[(i,j)]
        if i == len(s1) or j == len(s2):
            return 0
        
        elif s1[i] == s2[j]:
            memo[(i,j)] = 1 + self.lcs(i+1,j+1,s1,s2,memo)
            return memo[(i,j)]
        else:
            memo[(i,j)] = max(self.lcs(i+1,j,s1,s2,memo), self.lcs(i,j+1,s1,s2,memo))
            return memo[(i,j)]
        return memo[(i,j)]
        
       
    
    