class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            unordered_map<char, int> mpp;
            int maxLen = 0;
            int start = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (mpp.count(s[i]) && mpp[s[i]] >= start)
                {
                    start = mpp[s[i]] + 1;
                }
                mpp[s[i]] = i;
                maxLen = max(maxLen, i - start + 1);
            }
            return maxLen;
        }
};