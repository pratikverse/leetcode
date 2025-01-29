class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
    string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    int start = 0; // Start index of the longest palindrome
    int maxLength = 1; // Length of the longest palindrome

    // Generate all possible substrings
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the substring s[i...j] is a palindrome
            if (isPalindrome(s, i, j)) {
                int currentLength = j - i + 1;
                // Update the longest palindrome if this one is longer
                if (currentLength > maxLength) {
                    start = i;
                    maxLength = currentLength;
                }
            }
        }
    }

    // Return the longest palindromic substring
    return s.substr(start, maxLength);
}
};