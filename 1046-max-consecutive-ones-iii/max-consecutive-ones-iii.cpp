class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;  // Initialize maxlen
        int l = 0, r = 0;  // Initialize left and right pointers
        int z = 0;  // Count of zeros
        
        while (r < nums.size()) {
            // Count zeros in current window
            if (nums[r] == 0) {
                z++;
            }
            
            // Shrink window if zeros exceed k
            while (z > k) {
                if (nums[l] == 0) {
                    z--;
                }
                l++;
            }
            
            // Update maximum length
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        
        return maxlen;  // Remove unnecessary increment
    }
};