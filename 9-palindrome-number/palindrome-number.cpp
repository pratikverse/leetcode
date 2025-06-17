#include <limits.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int temp_x = x;
        if(x<0){
            return false;
        }
        int reverse_x = 0;
        while(x>0){
            int last_digit = x % 10;
            if(reverse_x>INT_MAX / 10 || reverse_x < INT_MIN / 10){
                return false;
            }
            reverse_x = (reverse_x * 10) + last_digit;
            x = x / 10;
        }
        return reverse_x == temp_x;
    }

};
