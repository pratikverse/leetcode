class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return ""; // Edge case: empty input
        }

        string prefix = strs[0]; // Start with the first string as the prefix

        for (int i = 1; i < strs.size(); i++) {
            // Reduce the prefix until it matches the beginning of the current string
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);

                // If the prefix becomes empty, return immediately
                if (prefix.empty()) {
                    return "";
                }
            }
        }

        return prefix;
    }
};