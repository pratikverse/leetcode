class Solution
{
    public:

        string removeKdigits(string num, int k) {
        // If k equals length of num, return "0"
        if (k >= num.length()) return "0";
        
        // Use a stack to build the result
        vector<char> stack;
        
        // Process each digit
        for (char digit : num) {
            // Remove digits that are larger than current digit
            while (k > 0 && !stack.empty() && stack.back() > digit) {
                stack.pop_back();
                k--;
            }
            stack.push_back(digit);
        }
        
        // If k > 0, remove remaining digits from end
        while (k > 0 && !stack.empty()) {
            stack.pop_back();
            k--;
        }
        
        // Build result string
        string result;
        bool leadingZero = true;
        for (char digit : stack) {
            if (leadingZero && digit == '0') continue;
            leadingZero = false;
            result += digit;
        }
        
        return result.empty() ? "0" : result;
    }
};