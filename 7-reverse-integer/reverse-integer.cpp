class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        if(x == 0){
            return 0;
        }
        while(x!=0){
            int last_digit = x % 10;
            if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            reverse = reverse * 10 + last_digit;
            x = x / 10;
        }
        return reverse;
    }
    
};