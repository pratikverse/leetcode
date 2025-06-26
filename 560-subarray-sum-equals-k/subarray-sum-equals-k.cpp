class Solution
{
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            unordered_map<int, int> mpp;
            int curr_sum = 0, res = 0;
            mpp[0] = 1;

            for (int i = 0; i < nums.size(); i++)
            {
                curr_sum += nums[i];
                if (mpp.find(curr_sum - k) != mpp.end())
                {
                    res += mpp[curr_sum - k];
                }
                mpp[curr_sum]++;
            }
            return res;
        }
};