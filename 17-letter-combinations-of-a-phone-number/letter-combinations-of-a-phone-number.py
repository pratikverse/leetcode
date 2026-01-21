class Solution(object):
    def letterCombinations(self, digits):
        phone = {
        2: 'abc', 3: 'def', 4: 'ghi',
        5: 'jkl', 6: 'mno', 7: 'pqrs',
        8: 'tuv', 9: 'wxyz'
        }
        result = []
        digits = int(digits)
        def reverse(digits): 
            rev = 0
            while digits > 0:
                rem = digits % 10
                rev = 10 * rev + rem
                digits //= 10
            return rev

        digits = reverse(digits)  

        def backtrack(digits, ans):
            if digits == 0 or digits == 1:
                result.append("".join(ans))
                return
            
            first_val = digits % 10
            lst1 = list(phone.get(first_val))
            for i in lst1:
                ans.append(i)
                backtrack(digits // 10, ans)
                ans.pop()
            

        backtrack(digits, [])
        return result
        
