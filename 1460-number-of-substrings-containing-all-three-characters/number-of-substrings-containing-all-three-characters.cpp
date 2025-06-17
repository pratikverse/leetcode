class Solution
{
    public:
        int numberOfSubstrings(string s)
        {
            if (s.size() < 3)
            {
                return 0;
            }

            int cnt = 0;
            unordered_map<char, int> freq;
            int left = 0, right = 0;

            while (right < s.size())
            {
               	// Add character at right pointer
                freq[s[right]]++;

               	// While we have all a, b, c in current window
                while (freq['a'] >= 1 && freq['b'] >= 1 && freq['c'] >= 1)
                {
                   	// All substrings from current window to end will contain abc
                    cnt += s.size() - right;

                   	// Contract window from left
                    freq[s[left]]--;
                    left++;
                }
                right++;
            }

            return cnt;
        }
};